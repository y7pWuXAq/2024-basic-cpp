#include <iostream> // 헤더파일

int global = 100;

void func() {
	int a = 100;
}

int func()
{
	int val;	// 메모리공간(RAM)에 int 크기로 저장공간을 할당받고 val이름으로 사용한다.
	std::cout << "숫자입력 : ";
	std::cin >> val;

	std::cout << "입력한 숫자는" << val << "입니다." << std::endl;
	return 0;
}

/*
	지역변수 = 로컬변수 : 선언된 범위 안에서만 사용이 가능한 변수 
	(static 영역에 저장)
	전역변수 : 전체 범위에서 사용이 가능한 변수
*/

int val1, val2;
int result = 0;	// 변수 선언과 동시에 값을 대입 : 변수 초기화

/*
제어문
	1. 선택 제어문
		- if, switch

	2. 반복 제어문
		- for, while 
	
	* for(초기식; 조건식; 증감식) {
		1. 초기식을 가지고 조건식의 참, 거짓을 따진다.
		2. 조건식이 참이면 for문의 실행문을 실행.
		3. 증감식을 실행.
		4. 조건식의 참, 거짓을 재확인.
		5. 거짓일 경우 for문을 빠져나간다.
	}
*/