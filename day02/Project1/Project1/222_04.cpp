#include <iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void);
}
	
namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		cout << "BestCom�� ������ �Լ�" << endl;
	}
}

void BestComImpl::SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}

void ProgComImpl::SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}