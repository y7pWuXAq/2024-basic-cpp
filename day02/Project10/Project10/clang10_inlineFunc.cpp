#include <iostream>


// �ζ��� �Լ��� ����Ͽ�,
// ������ ����ϴ� ��ũ�� �Լ� ����
inline int SQUARE(int x)
{
	return x * x;
}


// SQUARE ��ũ�� �Լ� ȣ�� 
// ��� ��� �ϴ� main
int main(void) {

	// 5�� ������ 25 ���
	std::cout << SQUARE(5) << std::endl;   

	// 12�� ������ 144 ���
	std::cout << SQUARE(12) << std::endl;  
	return 0;
}