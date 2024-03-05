#include <iostream>
using namespace std;

class First
{
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0) :num1(n1), num2(n2)
	{ }
	void ShowData() { cout << num1 << ", " << num2 << endl; }
};

class Second
{
private:
	int num3, num4;
public:
	Second(int n3 = 0, int n4 = 0) :num3(n3), num4(n4)
	{ }
	void ShowData() { cout << num3 << ", " << num4 << endl; }

	Second& operator = (const Second& ref)		// 대입연산자
	{
		cout << "Second& operator=()" << endl;
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
};

int main(void)
{
	First fsrc(111, 222);
	First fcpy;
	// First fcpy = fsrc;	// 생성과 동시에 초기화 > 복사 생성자 호출
	Second ssrc(333, 444);
	Second scpy;
	fcpy = fsrc;		// 디폴트 대입연산자 호출해서 실행 됨. (멤버대 멤버 대입) ; 디폴트 복사 생성자와 유사
	scpy = ssrc;		// 명시적으로 작성 한 Second 클래스의 대입연산자 호출
	fcpy.ShowData();
	scpy.ShowData();

	First fob1, fob2;
	Second sob1, sob2;
	fob1 = fob2 = fsrc;
	sob1 = sob2 = ssrc;

	fob1.ShowData();
	fob2.ShowData();
	sob1.ShowData();
	sob2.ShowData();
	return 0;
}