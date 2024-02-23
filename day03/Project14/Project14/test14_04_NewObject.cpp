#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple // 새로운 자료형이라고 생각하면 쉬움
{
public:
	Simple() // 생성자(클래스 이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1 : ";
	Simple* sp1 = new Simple; //
	cout << "case 2 : ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2); // 사용 했던 메모리 반환
	return 0;
}