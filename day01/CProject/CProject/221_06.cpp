#include <iostream>

using namespace std;

int sum(int an1, int an2) {
	int res;
	res = an1 + an2;
	return res;
}

int mnu(int an1, int an2) {
	int res;
	res = an1 - an2;
	return res;
}

int main() {
	int n1;
	int n2;
	char op;

	cout << "���� �ϳ� �Է� > ";
	cin >> n1;

	cout << "���� �ϳ� �Է� > ";
	cin >> n2;

	cout << "������ �Է� > ";
	cin >> op;


	if (op == '+') {
		// sum(n1, n2);
		int result = sum(n1, n2);
		cout << "������� : " << result << endl;

	}if (op == '-') {
		// mnu(n1, n2);
		int result = mnu(n1, n2);
		cout << "������� : " << result << endl;

	}if (op == '*') {
		int result = n1 * n2;
		cout << "������� : " << result << endl;

	}if (op == '/') {
		int result = n1 / n2;
		cout << "��������� : " << result << endl;
	}

	return 0;
}