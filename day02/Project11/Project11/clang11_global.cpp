#include <iostream>
using namespace std;

// �������� - ���α׷� ��ü���� ��밡��
int global = 100; 
int global1 = 200;

int main() {
	int val = 100;

	// ���� ���� - ����� ���������� ��밡��
	global = 200; 

	int global1 = 300;

	cout << "�������� Global >  " << global << endl;
	cout << "�������� > " << val << endl;

	// ���������� �̸��� ������ ��� ���������� ������
	cout << "�������� Global1 >" << global1 << endl;

	return 0;
}

void func() {
	int val = 0;
	global = 10;
	global1 = 10;
	val = 10;
}