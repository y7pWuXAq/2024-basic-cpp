#include <iostream>
using namespace std;

/*
	swap 기능 함수로 만들기
*/

void swap(int *x, int *y) // 주소를 받을 수 있는 포인터 변수를 선언
{
	int temp;
	temp = *x; // 주소의 데이터를 참조
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b); // 변수의 주소를 전달

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}

/*

A & B  - 비트 연산자 : A와 B를 논리곱 연산해라
A && B - 논리 연산자 - 논리곱 : A가 참이고 B도 참인 경우 결과가 참

int num = 10;		// 일반적인 변수 선언
int* ptr = &num1;	// 변수 num1의 주소 값을 반환해서 포인터 ptr에 저장
int& num2 = num1;	// 변수 num1에 대한 참조자 num2

*/