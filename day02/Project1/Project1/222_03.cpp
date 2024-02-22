#include <iostream>

using namespace std;

inline int SQUARE(int x) // 인라인 함수는 선언한 타입만 변수에 적용 가능.
{
	return x * x;
}


int main(void)
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;

	return 0;
}