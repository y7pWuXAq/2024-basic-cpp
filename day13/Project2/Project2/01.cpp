/*
	char ary[] = {'a', 'b', 'c', 'd', 'e', 'f'}
	���� : while ���� if �������� �迭 ������ �ٲپ� ���� ����Ͻÿ�
*/

#include <iostream>
using namespace std;

int main() {
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int length = sizeof(ary) / sizeof(ary[0]);// �迭�� ��ü ũ�⸦ �ڷ��� ũ��� ������ => �迭�� ����
    cout << "�ٲٱ� �� �迭: ";
    for (int i = 0; i < length; i++) {
        cout << ary[i]; // �迭 ��Ҹ� �ϳ��� ���
    }
    cout << endl;
    int i = 0;
    while (i < length / 2) {      // �迭�� �������� ����� ���� ��Ұ��� ���� ��Ұ��� �ٲ���
        char temp = ary[i];         // �ٲٱ� �� ��Ұ� temp�� ����
        ary[i] = ary[length - i - 1];   // ���� 0,1,2 �ε����� ��Ұ� 5,4,3 �ε��� ��Ұ����� ��ȯ
        ary[length - i - 1] = temp;        // �ε��� 5,4,3�� ��Ұ��� ��ȯ �� 0,1,2 ��Ұ����� ��ȯ
        i++;
    }


    cout << "�ٲ� �� �迭: ";
    for (int i = 0; i < length; i++) {
        cout << ary[i]; // �迭 ��Ҹ� �ϳ��� ���
    }
    cout << endl;
    return 0;
}