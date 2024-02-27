#include <iostream>
using namespace std;

class SelfRef
{
private :
	int num;
public :
	SelfRef(int n) : num(n)
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
	}
	SelfRef& ShowtwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowtwoNumber();
	ref.ShowtwoNumber();

	ref.Adder(1).ShowtwoNumber().Adder(2).ShowtwoNumber();
	return 0;
}