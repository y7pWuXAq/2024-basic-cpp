#include <iostream>

using namespace std;	// std 네임 스페이스의 모든 것을 사용하겠다.

int main()
{
	int inKey;
	cout << "숫자를 하나 입력하세요 > ";
	cin >> inKey;

	if (inKey == 7) {	// if문 문법
		cout << "빙고!" << endl;
	}
	if (inKey > 7) {
		cout << "숫자가 큽니다." << endl;
	}
	if (inKey < 7) {
		cout << "숫자가 작습니다." << endl;
	}

	return 0;
}