#include <iostream>
using namespace std;

void cal(int n1, int n2)
{
	if (!n2) throw n2;		// 예외를 던지기
	cout << "+ : " << n1 + n2 << endl;
	cout << "- : " << n1 - n2 << endl;
	cout << "x : " << n1 * n2 << endl;
	cout << "/ : " << n1 / n2 << endl;
}

int main(int argc, char* argv[])
{
	int num1, num2;
	cout << "두 개의 숫자를 입력 : ";
	cin >> num1 >> num2;
	try		// 예외 발생 예상
	{
		cal(num1, num2);
	}
	catch (int excption)	// try와 쌍으로 사용
	{
		cout << "0 으로 나눌 수 없습니다." << endl;
	}

	return 0;
}