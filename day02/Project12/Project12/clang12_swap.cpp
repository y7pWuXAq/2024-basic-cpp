#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "�ٲٱ� ��" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "�ٲٱ� ��" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
