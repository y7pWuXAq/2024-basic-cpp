#include <iostream>
#include <string>

using namespace std;

// human ����ü ����
struct Human {
    string name;
    int age;
    string job;
    string residentNumber; // �ֹε�Ϲ�ȣ �߰�
};

// Human ����ü�� �Ű������� �޴� �Լ� ����
void showHuman(const Human& h1) {
    cout << "name: " << h1.name << ", age: " << h1.age << ", job: " << h1.job << ", resident number: " << h1.residentNumber << endl;
}

int main() {
    // human ����ü ���� ���� �� �ʱ�ȭ
    Human h1 = { "ȫ�浿", 30, "������", "123456-1234567" }; // �ֹε�Ϲ�ȣ �߰�

    // showHuman �Լ� ȣ���Ͽ� ����ü ���� ���
    showHuman(h1);

    return 0;
}
