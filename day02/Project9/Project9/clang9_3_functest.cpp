#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2);   // �Լ� ����

void func() {
    cout << "Hi" << endl;
}

int main(void)
{
    cout << Adder() << endl;      // �Լ� ȣ�� :  Adder(), 3
    cout << Adder(5) << endl;      // 7
    cout << Adder(3, 5) << endl;   // 8
    func(); // func() ȣ��: ��ȯ���� �����Ƿ� ������� ����
    return 0;
}

int Adder(int num1, int num2)   // �Լ� ����
{
    return num1 + num2;
}
#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2);   // �Լ� ����

void func() {
    cout << "Hi" << endl;
}

int main(void)
{
    cout << Adder() << endl;      // �Լ� ȣ�� :  Adder(), 3
    cout << Adder(5) << endl;      // 7
    cout << Adder(3, 5) << endl;   // 8
    func(); // func() ȣ��: ��ȯ���� �����Ƿ� ������� ����
    return 0;
}

int Adder(int num1, int num2)   // �Լ� ����
{
    return num1 + num2;
}

/*
�Ű������� ����Ʈ ���� �����Ǿ� ������, ����� �Ű������� ������ ���� ���� ���������� �����ϴ�.
�׸��� ���޵Ǵ� ���ڴ� ���ʿ������� ä���� ������, �������� ����Ʈ ������ ä������.
*/

//Ŭ���� �ȿ� ���� �Լ� : �޼��� Ʋ���κ� ã����
