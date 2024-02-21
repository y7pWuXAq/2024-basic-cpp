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

	cout << "Á¤¼ö ÇÏ³ª ÀÔ·Â > ";
	cin >> n1;

	cout << "Á¤¼ö ÇÏ³ª ÀÔ·Â > ";
	cin >> n2;

	cout << "¿¬»êÀÚ ÀÔ·Â > ";
	cin >> op;


	if (op == '+') {
		// sum(n1, n2);
		int result = sum(n1, n2);
		cout << "µ¡»ù°á°ú : " << result << endl;

	}if (op == '-') {
		// mnu(n1, n2);
		int result = mnu(n1, n2);
		cout << "»¬»ù°á°ú : " << result << endl;

	}if (op == '*') {
		int result = n1 * n2;
		cout << "°ö»ù°á°ú : " << result << endl;

	}if (op == '/') {
		int result = n1 / n2;
		cout << "³ª´°»ù°á°ú : " << result << endl;
	}

	return 0;
}