#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
	int num1, num2;
	cout << "두 개의 숫자를 입력 : ";
	cin >> num1 >> num2;

	cout << "+ : " << num1 + num2 << endl;
	cout << "- : " << num1 - num2 << endl;
	cout << "x : " << num1 * num2 << endl;

	try		// 예외 처리 
	{
		if (!num2) throw num2;
		cout << "/ : " << num1 / num2 << endl;
	}
	catch (int exception)
	{
		cout<<"0 으로 나눌 수 없습니다."<<endl;
	}

	return 0;
}