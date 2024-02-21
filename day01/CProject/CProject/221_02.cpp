#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "정수입력 >";
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