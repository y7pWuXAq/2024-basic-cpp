#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;


	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "¹Ù²ï ÈÄ" << endl;
	cout << "a :" << a << endl;
	cout << "b : " << b << endl;

	return 0;
}