/*
	C 타입의 구조체
*/

#include <stdio.h>
typedef struct human		// human 구조체
{ 
	char name[20];	// 속성 ; 멤버변수
	int age;
	char job[20];
}Human;				// 앞으로 human 구조체를 Human으로 사용하겠다는 의미

void showHuman(Human h)
{
	printf("name : %s age : %d job : %s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" };	// Human 타입의 변수를 선언하고 초기화를 시킨다.
	showHuman(h1);

	return 0;
}