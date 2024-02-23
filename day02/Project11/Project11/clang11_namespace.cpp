#include <iostream>


// namespace BestComImpl { ... } 
// -> BestComImpl�̶�� ���ӽ����̽��� ����. 
// --> ���ӽ����̽��� ����, �Լ�, Ŭ���� ���� �׷�ȭ�Ͽ�, 
// --->���� ���������� �̸� �浹�� ����.

// void SimpleFunc(void) { ... }
// -> BestComImpl ���ӽ����̽� ���� ���ǵ� SimpleFunc �Լ�.
// --> �� �Լ��� "BestCom�� ������ �Լ�"�� ���
namespace BestComImpl {
    void SimpleFunc(void) {
        std::cout << "BestCom�� ������ �Լ� " << std::endl;
    }
}


// namespace ProgComImpl { ... }
// -> ProgComImpl�̶�� ���ӽ����̽��� ����.

// void SimpleFunc(void) { ... } 
// -> ProgComImpl ���ӽ����̽� ���� ���ǵ� SimpleFunc �Լ�.
// --> �� �Լ��� "ProgCom�� ������ �Լ�"�� ����մϴ�.
namespace ProgComImpl {
    void SimpleFunc(void) {
        std::cout << "ProgCom�� ������ �Լ� " << std::endl;
    }
}
int main(void) {
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

// BestComImpl ���ӽ����̽� 
// -> SimpleFunc �Լ��� ����.
// -->�� �Լ��� "BestCom�� ������ �Լ�" ���.

// ProgComImpl ���ӽ����̽�
// -> SimpleFunc �Լ��� ����.
// --> �� �Լ��� "ProgCom�� ������ �Լ�"�� ���.