#include <iostream>
using namespace std;

class AClass
{
private:
	int num;

public :				// 접근 제어 지시자
	AClass(int anum){	// 생성자 : 초기화 담당
		num = anum;
	}

void Ainfo() {
	cout << "A::num : " << num << endl;
	}
};

int main()
{
	AClass a(10);	// a라는 함수에 입력값 10 넣어 호출, 10~12줄 실행
	a.Ainfo();

	return 0;
}