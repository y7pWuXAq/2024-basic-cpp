#include <iostream>
using namespace std;

class TowNumber
{
private :
	int num1;
	int num2;
public :
	TowNumber(int num1, int num2)
	{
		this->num1 = num1;	// 필드 num1에 매개 변수 num1 사용
		this->num2 = num2;
	}
	/*
	TwoNumber(int num1, int num2)
		: num1(num1), num2(num2)
	{
		// empty
	}
	*/
	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TowNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}