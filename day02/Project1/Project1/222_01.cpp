#include <iostream>

using namespace std;

// 함수 정의가 메인코드 아래 있을 때 함수 선언을 메인코드 위에 작성

int Adder(int num1 = 1, int num2 = 2);	//함수 선언

void func() {
	cout << "Hi" << endl;
}

int main(void) 
{

	cout << Adder() << endl;	//함수 호출 : Adder()
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;
	return 0;

}

int Adder(int num1, int num2)	// 함수 정의
{
	return num1 + num2;
}

// 클래스 안에 들어가는 함수는 메서드라고 부른다.