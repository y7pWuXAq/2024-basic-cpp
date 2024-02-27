#include <iostream>
using namespace std;

class FruitSeller {
private:
	int Apple_Price;
	int numOfApples;
	int myMoney;

public:
	void InitMember(int price, int num, int money) { // => ������(���:��ü�� �����ϰ�, �ʱ�ȭ)
		Apple_Price = price;
		numOfApples = num; // �ùٸ� ������ ����
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / Apple_Price; //�Ǹ� ����
		numOfApples -= num; // �Ȱ� �� �� ���� ��� ���� => 
		myMoney += money; // ����� �Ȱ� �� �� => myMoney = myMoney + money;
		return num;

	}

	void ShowSalesResult()
	{
		cout << "���� ��� ���� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl;
	}

};

class FruitBuyer {

	int numOfApples; //private
	int myMoney; //private

public:
	void InitMember(int money) {
		numOfApples = 0;
		myMoney = money;


	}
	void BuyApples(FruitSeller& seller, int money) {
		numOfApples += seller.SaleApples(money); // seller���� ������ �ݾ����� ����
		myMoney -= money; // �������� �ܾ��� ���ҽ�Ŵ
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "�Ǹ� ���� : " << numOfApples << endl;
	}

};

int main(void) {
	FruitSeller seller;
	seller.InitMember(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMember(5000);
	buyer.BuyApples(seller, 2000); // ���� ����

	cout << "���� �Ǹ����� ��Ȳ : " << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ : " << endl;
	buyer.ShowBuyResult();
	return 0;
}

/*
1. FruitSeller Ŭ����:

	-> Apple_Price, numOfApples, myMoney��� �� ���� ��� ������ ������ ����.
		=> ������ ����� ����, ���� ����� ����, �Ǹ����� ���� �ݾ��� ��Ÿ��.

	->	InitMember �Լ��� ��� �������� �ʱ�ȭ.
		=> �� �Լ��� ����, ��� ����, ���� �ݾ��� �Ű������� �޾ƿͼ� ��� ������ �Ҵ�.

		-> SaleApples �Լ��� ����� �Ǹ��ϴ� �޼���.
			=> �����ڷκ��� ���� ���� ������� �Ǹ��ϰ�, �Ǹŵ� ����� ������ �Ǹ� ������ ��ȯ.

		-> ShowSalesResult �Լ� = ���� ����� ������ �Ǹ� ������ ���.

2. FruitBuyer Ŭ����:

	-> numOfApples, myMoney��� �� ���� ��� ������ ������ ����.
		=> ������ ������ ����� ����, �������� ���� �ݾ��� ��Ÿ��.

	-> InitMember �Լ��� ��� �������� �ʱ�ȭ.
		=> �ʱ⿡�� ����� �ϳ��� �������� �ʾ����Ƿ� numOfApples�� 0.

	-> BuyApples �Լ��� ���� �Ǹ��ڷκ��� ����� �����ϴ� �޼���.
		=>�Ǹ��ڿ��� ���� �ְ�, �Ǹŵ� ����� ������ ������Ű��, �������� �ܾ��� ���ҽ�Ŵ.

	->ShowBuyResult �Լ��� ���� ���� �ݾװ� ������ ����� ������ ���.


3. ���� �Լ�:
	-> main �Լ������� ���� ���� �Ǹ��ڿ� ���� ������ ��ü�� ���� �� -> �ʱ�ȭ.
	-> �����ڰ� �Ǹ��ڷκ��� ����� �����ϰ�, �ŷ� ������ ����� ���.

*/