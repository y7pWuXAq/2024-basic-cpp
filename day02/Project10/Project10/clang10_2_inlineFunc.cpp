#include <iostream>

// �ζ��� �Լ��� ����Ͽ� ������ ����ϴ� �Լ� ����
inline int SQUARE(int x)
{
    return x * x;
}

// main �Լ�
int main(void) {
    // SQUARE �Լ� ȣ�� �� ��� ���
    std::cout << "5�� ����: " << SQUARE(5) << std::endl;   // 5�� ������ 25 ���
    std::cout << "12�� ����: " << SQUARE(12) << std::endl;  // 12�� ������ 144 ���
    return 0;
}
