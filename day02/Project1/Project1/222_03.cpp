#include <iostream>

using namespace std;

inline int SQUARE(int x) // �ζ��� �Լ��� ������ Ÿ�Ը� ������ ���� ����.
{
	return x * x;
}


int main(void)
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;

	return 0;
}