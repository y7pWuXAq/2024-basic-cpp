#include <iostream>

// adder �Լ��� ����: �� ���� ������ �Ű������� �ް�, �⺻������ ���� num1 = 1�� num2 = 2�� ����
int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
    // adder �Լ� ȣ�� �� ��� ���
    std::cout << "[3, 3, 3] :" << BoxVolume(3,3,3) << std::endl;     // 1 + 2 = 3
    std::cout << "[5, 5, D] :" << BoxVolume(5,5) << std::endl;
    std::cout << "[7, D, D] :" << BoxVolume(7) << std::endl;
    std::cout << "[D, D, D] :" << BoxVolume(7) << std::endl;

    return 0;
}

// adder �Լ��� ����: �� ���� ������ �Ű������� �޾Ƽ� ���� ��ȯ
int adder(int num1, int num2) {
    return num1 + num2;
}