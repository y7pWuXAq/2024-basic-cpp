#include <iostream>
using namespace std;

/*
    swap �Լ� �����ϱ�
*/
void swap(int *aa, int *bb) { // �ּҹ����� �ִ� ������ ������ ����
    int temp = *aa;
    *aa = *bb; // �ּ��� �����͸� ����
    *bb = temp;

    // swap �Լ��� ����. �� �Լ��� �� ���� ���� �Ű����� a�� b�� �޾Ƽ�, �̵��� ���� ��ȯ.
    // int temp = x; -> �ӽ� ���� temp�� �����ϰ�, x�� ���� ����.
    // x = y; ->  x�� y�� ���� ����.
    // y = temp; -> y�� �ӽ� ���� temp�� ���� �����Ͽ� ��ȯ�մϴ�.

    
    
    

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
int& num2 = num1; // num2 -> num1�� ����
int& num2 = 100; // c++�� ���ͷ� ��

int num = 10;   // �Ϲ����� ���� ����
int* ptr = &num1; // ptr -> num1 ������
int& num2 = num1; //�̹� ������ num2 -> num1�� ������ ����


