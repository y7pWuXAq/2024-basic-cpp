#include <iostream>
int adder(int num1 = 1, int num2 = 2) { //�Լ� ����
        return num1 + num2;
    }

int main(void)
{
    int count = 0; // �ݺ� Ƚ���� �����ϴ� ����

    while (count < 3) // count�� 3���� ���� ������ �ݺ�
    {
        // adder() ȣ��: �⺻ �Ű������� ����Ͽ� 1 + 2 = 3�� ��ȯ
        if (count == 0) {
            std::cout << "adder() ȣ��: �⺻ �Ű������� ����Ͽ� ";
            std::cout << adder() << "�� ��ȯ" << std::endl;
        }
        // adder(5) ȣ��: ù ��° �Ű������� 5, �� ��° �Ű������� �⺻�� 2�� ����Ͽ� 5 + 2 = 7�� ��ȯ
        else if (count == 1) {
            std::cout << "adder(5) ȣ��: ù ��° �Ű������� 5, ";
            std::cout << "�� ��° �Ű������� �⺻�� 2�� ����Ͽ� ";
            std::cout << adder(5) << "�� ��ȯ" << std::endl;
        }
        // adder(3, 5) ȣ��: ù ��° �Ű������� 3, �� ��° �Ű������� 5�� �־��� 3 + 5 = 8�� ��ȯ
        else if (count == 2) {
            std::cout << "adder(3, 5) ȣ��: ù ��° �Ű������� 3, ";
            std::cout << "�� ��° �Ű������� 5�� �־��� ";
            std::cout << adder(3, 5) << "�� ��ȯ" << std::endl;
        }

        count++; // �ݺ� Ƚ�� ����
    }

    return 0;
}

// class �ȿ� ��� ���� �Լ� = Method