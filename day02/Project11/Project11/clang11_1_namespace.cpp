#include <iostream>


namespace BestComImpl {
    void SimpleFunc(void);
}


namespace ProgComImpl {
    void SimpleFunc(void);
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




// BestComImpl ���ӽ����̽��� ���ǵ� SimpleFunc �Լ��� ����. 
// --> �� �Լ��� "BestCom�� ������ �Լ�"�� ���.
void BestComImpl::SimpleFunc(void){
    std::cout << "BestCom�� ������ �Լ�" << std::endl;;
}


// ProgComImpl ���ӽ����̽��� ���ǵ� SimpleFunc �Լ��� ����. 
// --> �� �Լ��� "BestCom�� ������ �Լ�"�� ���.
void ProgComImpl::SimpleFunc(void) {
    std::cout << "BestCom�� ������ �Լ�" << std::endl;;
}