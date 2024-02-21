/*
	반복 제어문 : while
*/

using namespace std;
#include <iostream>

int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		//sum +=i;
		sum = i + sum;
		i++;
		if (i == 11) break;
	}
	cout << sum << endl;

	return 0;
}