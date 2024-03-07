#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n=0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number&ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	/*
		int a = 10; 
		int b = a;	> 동일한 타입이기 때문에 가능.
		double d = 3.14;
		a = d;	> 타입 불일치로 성립 안됨.
		d = a;	> ?
	*/

	Number num;
	num = 30;
	num.ShowNumber();
	return 0;
}