#include <iostream>
using namespace std;

// SimpleClass Ŭ���� ����
class SimpleClass {
private:
    int num1; // ù ��° ���� ��� ����
    int num2; // �� ��° ���� ��� ����

public:
    // �⺻ ������: ��� ��� ������ 0���� �ʱ�ȭ
    SimpleClass()
    {
        num1 = 0;
        num2 = 0;
    }

    // �ϳ��� ������ �޴� ������: num1�� ���� ������ �ʱ�ȭ�ϰ�, num2�� 0���� �ʱ�ȭ
    SimpleClass(int n)
    {
        num1 = n;
        num2 = 0;
    }

    // �� ���� ������ �޴� ������: ���� num1�� num2�� ���� ������ �ʱ�ȭ
    SimpleClass(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    /*
    // �� ���� ������ �޴� �������Դϴ�.
    // �Ű������� ���� ������ ��ü�� ��� �������� �ʱ�ȭ�մϴ�.
    // �Ű������� ������ ��쿡�� ���� 0���� �ʱ�ȭ�˴ϴ�.
    SimpleClass(int n1 = 0, int n2 = 0)
        {
            num1 = n1; // ù ��° �Ű������� ���� ���� num1�� �Ҵ��մϴ�.
            num2 = n2; // �� ��° �Ű������� ���� ���� num2�� �Ҵ��մϴ�.
        }

    */

    // ��� �������� ����ϴ� �Լ�
    void ShowData() const
    {
        cout << num1 << ' ' << num2 << endl;
    }
};

int main(void) {
    // ��ü ���� �� �ʱ�ȭ �� ���
    SimpleClass sc1; // �⺻ ������ ȣ��
    sc1.ShowData();

    SimpleClass sc2; // �⺻ ������ ȣ��
    sc2.ShowData();

    SimpleClass sc3(100, 200); // �� ���� ������ �޴� ������ ȣ��
    sc3.ShowData();
    return 0;
}






