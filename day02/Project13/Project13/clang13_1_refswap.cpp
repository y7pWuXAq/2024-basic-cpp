#include <iostream>
using namespace std;

/*
    reference swap �Լ� �����ϱ�
*/

// swap �Լ��� �� ���� ������ ���� �Ű����� x�� y�� ����.
// �Լ� ���ο����� �ӽ� ���� temp�� ����Ͽ� x�� ���� ���� �� 
// x�� y�� ���� ������ �Ŀ� y�� temp�� ���� �����Ͽ� �� ������ ���� ��ȯ��.

void swap(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}



int main() 
{
    int val1 = 10;
    int val2 = 20;

    swap(val1, val2);
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;

    

    return 0;
}
