#include <iostream>

using namespace std;

int main()
{
	const int num = 10;

	int num1 = 10;
	int *pnum1;			 // 포인터(주소) 변수 pnum1 선언, *의 의미는 포인터 변수를 나타내는 기호
	pnum1 = &num1;		 // 변수 num1의 주소값을 포인터 변수 pnum1에 저장한다.

	cout << "num에 저장된 값 : " << num << endl;
	cout << "num1에 저장된 값 : " << num1 << endl;
	cout << "num1의 주소 값 : " << &num1 << endl;
	cout << "pnum1에 저장된 값 : " << pnum1 << endl;
	cout << "pnum1에 저장된 데이터 :" << *pnum1 << endl;	// * : 변수의 데이터(연산자)

	return 0;
}

/*
C에서 메모리에 저장 되는?

1. 스택 : 지역변수, 매개변수
2. heep : 사용자에게 할당된 영역, 사용을 하기 위해 malloc()으로 할당을 받고 - free()로 변환
3. data : 함수, 전역변수, 상수, 문자리터럴

*/