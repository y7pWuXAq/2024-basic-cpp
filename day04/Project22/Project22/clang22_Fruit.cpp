#include <iostream>
using namespace std;

// ���� �Ǹ��� Ŭ����
class FruitSeller {
private:
    int Apple_Price;    // ��� ����
    int numOfApples;    // ������ ��� ����
    int myMoney;        // ������ ��

public:
    // ������: �ʱ� ����, ��� ����, ������ ���� �Ű������� �޾� �ʱ�ȭ.
    FruitSeller(int price, int num, int money)
    {
        Apple_Price = price;
        numOfApples = num;
        myMoney = money;
    }

    // ����� �Ǹ��ϴ� �Լ�
    int SaleApples(int money)
    {
        int num = money / Apple_Price;  // ����� ���� ���
        numOfApples -= num;             // ������ ��� ���� ����
        myMoney += money;               // �Ǹ� ���� ����
        return num;                     // �Ǹ��� ��� ���� ��ȯ
    }

    // ���� ���¸� ����ϴ� �Լ�
    void ShowSalesResult() const
    {
        cout << "���� ���: " << numOfApples << endl;
        cout << "�Ǹ� ����: " << myMoney << endl;
    }
};

// ���� ������ Ŭ����
class FruitBuyer {
public:
    // ������: �ʱ� ���� �Ű������� �޾� �ʱ�ȭ.
    FruitBuyer(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }

private:
    int myMoney;        // ������ ��
    int numOfApples;    // ������ ��� ����

    // ����� �����ϴ� �Լ�
    void BuyApples(FruitSeller& seller, int money)
    {
        numOfApples += seller.SaleApples(money); // �Ǹ��ڷκ��� ����� ����.
        myMoney -= money;                         // ������ ���� ����.
    }

    // ���� ���¸� ����ϴ� �Լ�
    void ShowBuyResult() const
    {
        cout << "���� �ܾ�: " << myMoney << endl;
        cout << "��� ����: " << numOfApples << endl;
    }

    friend int main(); // main �Լ����� private ����� ������ �� �ֵ��� friend ����
};

int main(void) {
    FruitSeller seller(1000, 20, 0);   // ���� �Ǹ��� ��ü ����
    FruitBuyer buyer(5000);             // ���� ������ ��ü ����
    buyer.BuyApples(seller, 2000);      // ����� ����.

    cout << "���� �Ǹ����� ��Ȳ:" << endl;
    seller.ShowSalesResult();           // �Ǹ����� ��Ȳ ���
    cout << "���� �������� ��Ȳ:" << endl;
    buyer.ShowBuyResult();              // �������� ��Ȳ ���
    return 0;
}
