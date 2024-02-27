/*
메모리 동적 할당 : new 연산자 사용
프로그램 실행 중 메모리를 할당 받는다.
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "int size : " << sizeof(int) << endl;
	int* pi = new int;		// new 연산자를 통해서 heao 영역에 int(4byten) 크기만큼 메모리공간을 할당 받음
			// 할당 받은 메모리의 주소를 리턴 시켜준다.
	*pi = 10;
	cout << "PI가 가리키는 곳에 저장 된 값 : " << *pi << endl;
	
	delete pi;		// 동적 할당받은 메모리 공간을 반환한다.

	int* pary = new int[10];	// 배열 형태로 할당 한다는 의미
	for (int i = 0; i < sizeof(pary); i++) {
			pary[i] = i + 10;		// 배열의 각 방에 원소(요소)값을 집어 넣는다. ex) pary[0] = 10
	}

	for (int i = 0; i < sizeof(pary); i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete[]pary;
	return 0;
}