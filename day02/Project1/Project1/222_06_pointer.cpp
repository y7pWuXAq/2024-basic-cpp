#include <iostream>

using namespace std;

int main()
{
	const int num = 10;

	int num1 = 10;
	int *pnum1;			 // ������(�ּ�) ���� pnum1 ����, *�� �ǹ̴� ������ ������ ��Ÿ���� ��ȣ
	pnum1 = &num1;		 // ���� num1�� �ּҰ��� ������ ���� pnum1�� �����Ѵ�.

	cout << "num�� ����� �� : " << num << endl;
	cout << "num1�� ����� �� : " << num1 << endl;
	cout << "num1�� �ּ� �� : " << &num1 << endl;
	cout << "pnum1�� ����� �� : " << pnum1 << endl;
	cout << "pnum1�� ����� ������ :" << *pnum1 << endl;	// * : ������ ������(������)

	return 0;
}

/*
C���� �޸𸮿� ���� �Ǵ�?

1. ���� : ��������, �Ű�����
2. heep : ����ڿ��� �Ҵ�� ����, ����� �ϱ� ���� malloc()���� �Ҵ��� �ް� - free()�� ��ȯ
3. data : �Լ�, ��������, ���, ���ڸ��ͷ�

*/