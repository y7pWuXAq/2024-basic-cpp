#include <iostream>
using namespace std;

int main() {

	// num������ ���ȭ
	const int num = 10;

	// num�� ����̹Ƿ� ���� �ȵ�
	// num = 100;

	int num1 = 10;
	int* pnum1;  // �����ͺ��� pnum1 ���� => * : �׳� �ƹ��� �ǹ� ���� ��ȣ
	pnum1 = &num1; // -> ���� NUM1�� �ּҰ��� ������ ���� PNUM1�� ������

	cout << "num�� ����� ��: " << num << endl;
	cout << "num1�� ����� ��: " << num1 << endl;
	cout << "num1�� �ּҰ�: " << &num << endl;
	cout << "pnum1�� ����� ��: " << pnum1 << endl;
	cout << "Pnum1�� ����� ���� ������: " << *pnum1 << endl; //num�� ���̶� ����

	return 0;
}

