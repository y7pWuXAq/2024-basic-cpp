#include <iostream>

using namespace std;

// �Լ� ���ǰ� �����ڵ� �Ʒ� ���� �� �Լ� ������ �����ڵ� ���� �ۼ�

int Adder(int num1 = 1, int num2 = 2);	//�Լ� ����

void func() {
	cout << "Hi" << endl;
}

int main(void) 
{

	cout << Adder() << endl;	//�Լ� ȣ�� : Adder()
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;
	return 0;

}

int Adder(int num1, int num2)	// �Լ� ����
{
	return num1 + num2;
}

// Ŭ���� �ȿ� ���� �Լ��� �޼����� �θ���.