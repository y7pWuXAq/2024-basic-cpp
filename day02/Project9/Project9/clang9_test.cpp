#include <iostream>

// �� ������ �Է¹޾� ���� ���� ��ȯ�ϴ� �Լ�.
// �Ű������� �־����� ������ num1�� �⺻������ 1, num2�� �⺻������ 2�� ������.
int adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	// ������ ȣ�⿡ ���� ����� ���
	// adder() ȣ��: �⺻ �Ű������� ����Ͽ� 1 + 2 = 3�� ��ȯ
	std::cout << adder() << std::endl;   

	// adder(5) ȣ��: ù ��° �Ű������� 5, �� ��° �Ű������� �⺻�� 2�� ����Ͽ� 5 + 2 = 7�� ��ȯ
	std::cout << adder(5) << std::endl;

	// adder(3, 5) ȣ��: ù ��° �Ű������� 3, �� ��° �Ű������� 5�� �־��� 3 + 5 = 8�� ��ȯ
	std::cout << adder(3, 5) << std::endl; 

	return 0;
}