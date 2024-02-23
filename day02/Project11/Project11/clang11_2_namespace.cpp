#include <iostream>


// BestComImpl ���ӽ����̽� ���� SimpleFunc �Լ��� ����.
// void PrettyFunc(void);
// -> BestComImpl ���ӽ����̽� ���� PrettyFunc �Լ��� ����.
namespace BestComImpl {
    void SimpleFunc(void);
    void PrettyFunc(void); // PrettyFunc�� ���� �߰�
}

namespace ProgComImpl {
    void SimpleFunc(void);
}


// �� �ڵ�� BestComImpl ���ӽ����̽��� ���ǵ� SimpleFunc �Լ��� ȣ��. 
int main(void) {
    BestComImpl::SimpleFunc();
    return 0;
}


// BestComImpl ���ӽ����̽��� ���ǵ� SimpleFunc �Լ��� ����. 
// -> �� �Լ��� "BestCom�� ������ �Լ�"�� ���, 
// --> PrettyFunc() �Լ��� ȣ��, 
// ---> ProgComImpl::SimpleFunc() �Լ��� ȣ��.
void BestComImpl::SimpleFunc(void) {
    std::cout << "BestCom�� ������ �Լ�" << std::endl;
    PrettyFunc(); // PrettyFunc ȣ��
    ProgComImpl::SimpleFunc();
}

// BestComImpl ���ӽ����̽��� ���ǵ� PrettyFunc �Լ��� ����.
// -> �� �Լ��� "So Pretty."�� ���
void BestComImpl::PrettyFunc(void) {
    std::cout << "So Pretty" << std::endl;
}

// ProgComImpl ���ӽ����̽��� ���ǵ� SimpleFunc �Լ��� ����. 
// -> �� �Լ��� "ProgCom�� ������ �Լ�"�� �����.
void ProgComImpl::SimpleFunc(void) {
    std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}
