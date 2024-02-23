#include <iostream>

// adder �Լ��� ����: �� ���� ������ �Ű������� �ް�, �⺻������ ���� num1 = 1�� num2 = 2�� ����
int adder(int num1 = 1, int num2 = 2);

int main(void)
{
    // adder �Լ� ȣ�� �� ��� ���
    std::cout << adder() << std::endl;     // 1 + 2 = 3
    std::cout << adder(5) << std::endl;    // 5 + 2 = 7
    std::cout << adder(3, 5) << std::endl; // 3 + 5 = 8

    return 0;
}

// adder �Լ��� ����: �� ���� ������ �Ű������� �޾Ƽ� ���� ��ȯ
int adder(int num1, int num2) {
    return num1 + num2;
}