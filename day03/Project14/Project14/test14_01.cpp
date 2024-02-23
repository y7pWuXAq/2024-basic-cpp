#include <iostream>

int main()
{
	const int num = 10;
	int &ref = num;

	return 0;
}


/*
 - heep 메모리 영역 사용자에게 할당된 영역으로 사용하려면 malloc()으로 할당을 받고 free로 반환된다
	malloc() : C++ 에서는 new // free() : C++ 에서는 delete
*/