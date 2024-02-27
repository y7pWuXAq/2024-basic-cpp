#include <iostream>
using namespace std;

// �л� ������ ��� Ŭ���� ����
class StudentClass
{
private:
    int ID;             // �й�
    char name[20];      // �̸�
    char major[20];     // ����
    int age;            // ����

public:
    // ������: �л� ������ �ʱ�ȭ.
    // ����̴ϼȶ����� => ��ü ������ �ʱ�ȭ ���� ���� ������� �ʱ�ȭ �Ҷ� ���.
    // ��, ��ü������ ������� �̸� �ʱ�ȭ �Ǵ�
    StudentClass(int id, const char* studentName, const char* studentMajor, int studentAge) {
        ID = id;                            // �й� �ʱ�ȭ
        strcpy_s(name, studentName);        // �̸� ����
        strcpy_s(major, studentMajor);      // ���� ����
        age = studentAge;                   // ���� �ʱ�ȭ
    }

    // �л� ������ ����ϴ� �Լ�
    void ShowInfo() const {
        cout << "�й� -> " << ID << endl;        // �й� ���
        cout << "�̸� -> " << name << endl;      // �̸� ���
        cout << "���� -> " << major << "��" << endl;     // ���� ���
        cout << "���� -> " << age << "��" << endl;       // ���� ���
        cout << endl; // ���� ����
    }
};

int main() {
    // �л� ��ü ���� �� �ʱ�ȭ
    StudentClass student1(12345, "ȫ�浿", "��ǻ�Ͱ���", 20); //��ü�� �����ϸ� ������ ȣ��
    StudentClass student2(67890, "�迩��", "�濵��", 21);
    StudentClass student3(13579, "�Ƿη�", "�����", 22);
    StudentClass student4(24680, "����", "��ǰ������", 23);
    StudentClass student5(2020864003, "����ȯ", "����Ʈ������", 28);

    // �л� ���� ���
    student1.ShowInfo();
    student2.ShowInfo();
    student3.ShowInfo();
    student4.ShowInfo();
    student5.ShowInfo();

    return 0;
}

    /*�߰� ���� :
     strcpy => string copy�� ���Ӹ�, �Լ��� � ����(�޸�) or ���ڿ� ����� ���� �Ǿ��ִ� ���ڿ��� �ٸ� ����(�޸�) ������ �� ���
     strcpy_s => strcpy�Լ��� ������ �����ϱ� ���ؼ� ������� �Լ�
     -> ����������, dest������ src���� ���̿� dest�� ����Ű�� �޸��� ũ�⸦ ���� �Ű� ������ �߰�.*/

/* 
1. private: 
-> private���� ����� ����� Ŭ���� �ܺο��� ������ �� ������, ���� Ŭ���� ������ ��� �Լ������� ������ �� ����.
--> ��, �ش� ����� Ŭ������ �������� ������ ��ġ�� �ܺο����� ������ ����.

2. public: 
-> public���� ����� ����� Ŭ���� �ܺο����� ������ �� ����.
--> ���� Ŭ������ ����ϴ� �ڵ忡�� �ش� ����� ���� �����Ͽ� ���� �аų� ������ �� ����.
*/