#include <iostream>

#define SQUARE(x) ((x)*(x))	// 매크로 함수, 아주 간단한 식으로만, 전부 대문자로 작성

using namespace std;

int main()
{
	cout << SQUARE(5) << endl;
	return 0;
}