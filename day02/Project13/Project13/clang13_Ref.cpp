#include <iostream>

using namespace std;

int main() {

	// ũ�Ⱑ 3�� ������ �迭 arr�� �����ϰ� �ʱ�ȭ. 
	// �迭�� �� ��ҿ��� 1, 3, 5�� ������� ����
	int arr[] = { 1, 3, 5, 7, 9 }; // �迭����

	for (int i = 0; i < 5; i++) // �迭���
	{
		cout << i << "��° �濡 ����ִ� ��Ұ�!" << arr[i] << endl; //�迭�� �� ���ҿ� ����

	}

	arr[3] = 10;
	cout << "arr[3]" << arr[3] << endl;
	// �迭 arr�� �� ��ҿ� ���� ������ ����
	// �̸� ���� ref1, ref2, ref3�� ����
	// ���� ���� ref1, ref2, ref3 => ���� arr�� ù ��°, �� ��°, �� ��° ��Ҹ� ����Ű�� ����
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	ref1 = 100;
	cout << "arr[0] = " << arr[0] << endl;
	return 0;
}