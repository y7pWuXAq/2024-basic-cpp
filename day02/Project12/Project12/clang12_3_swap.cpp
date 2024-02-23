#include <iostream>
using namespace std;

/*
    reference swap �Լ� �����ϱ�
*/

// swap �Լ��� �� ���� ������ ���� �Ű����� x�� y�� ����.
// �Լ� ���ο����� �ӽ� ���� temp�� ����Ͽ� x�� ���� ���� �� 
// x�� y�� ���� ������ �Ŀ� y�� temp�� ���� �����Ͽ� �� ������ ���� ��ȯ��.

void swap(int &x, int&y) {
    int temp = x;
    x = y;
    y = temp;
}



int main() {
    int a = 10;
    int b = 20;

    cout << "before" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(a, b);

    cout << "after" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
