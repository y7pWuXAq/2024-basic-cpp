#include <iostream>
using namespace std;

/*
	swap ��� �Լ��� �����
*/

void swap(int *x, int *y) // �ּҸ� ���� �� �ִ� ������ ������ ����
{
	int temp;
	temp = *x; // �ּ��� �����͸� ����
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b); // ������ �ּҸ� ����

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}

/*

A & B  - ��Ʈ ������ : A�� B�� ���� �����ض�
A && B - �� ������ - ���� : A�� ���̰� B�� ���� ��� ����� ��

int num = 10;		// �Ϲ����� ���� ����
int* ptr = &num1;	// ���� num1�� �ּ� ���� ��ȯ�ؼ� ������ ptr�� ����
int& num2 = num1;	// ���� num1�� ���� ������ num2

*/