#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "�����Է� >";
	cin >> inKey;
	
	if (inKey == 7) {	// if�� ����
		cout << "����!" << endl;
	}
	if (inKey > 7) {
		cout << "���ڰ� Ů�ϴ�." << endl;
	}
	if (inKey < 7) {
		cout << "���ڰ� �۽��ϴ�." << endl;
	}

	return 0;
}