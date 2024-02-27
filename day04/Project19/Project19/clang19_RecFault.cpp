#include <iostream>
using namespace std;

// Point Ŭ���� ����: 2���� ��� ���� �� ���� ��Ÿ��
class Point {
public:
    int x; // x ��ǥ
    int y; // y ��ǥ
};

// Rectangle Ŭ���� ����: ���簢���� ��Ÿ��
class Rectangle {
public:
    Point upLeft;    // �»�� ��
    Point lowRight;  // ���ϴ� ��

public:
    // ���簢�� ���� ���
    void ShowRecInfo() {
        cout << "�� ��� : " << '[' << upLeft.x << ",";
        cout << upLeft.y << ']' << endl;
        cout << "�� ��� : " << '[' << lowRight.x << ",";
        cout << lowRight.y << ']' << endl << endl;
    }
};

int main(void) {
    // Point ��ü ���� �� �ʱ�ȭ
    Point pos1 = { -2, 4 }; // �»�� ��
    Point pos2 = { 5, 9 };  // ���ϴ� ��

    // Rectangle ��ü ���� �� �ʱ�ȭ
    Rectangle rec = { pos2, pos1 }; // �»��(pos2), ���ϴ�(pos1)

    // ���簢�� ���� ���
    rec.ShowRecInfo();
    return 0;
}
#include <iostream>
using namespace std;

// Point Ŭ���� ����: 2���� ��� ���� �� ���� ��Ÿ��
class Point {
public:
    int x; // x ��ǥ
    int y; // y ��ǥ
};

// Rectangle Ŭ���� ����: ���簢���� ��Ÿ��
class Rectangle {
public:
    Point upLeft;    // �»�� ��
    Point lowRight;  // ���ϴ� ��

public:
    // ���簢�� ���� ���
    void ShowRecInfo() {
        cout << "�� ��� : " << '[' << upLeft.x << ",";
        cout << upLeft.y << ']' << endl;
        cout << "�� ��� : " << '[' << lowRight.x << ",";
        cout << lowRight.y << ']' << endl << endl;
    }
};

int main(void) {
    // Point ��ü ���� �� �ʱ�ȭ
    Point pos1 = { -2, 4 }; // �»�� ��
    Point pos2 = { 5, 9 };  // ���ϴ� ��

    // Rectangle ��ü ���� �� �ʱ�ȭ
    Rectangle rec = { pos2, pos1 }; // �»��(pos2), ���ϴ�(pos1)

    // ���簢�� ���� ���
    rec.ShowRecInfo();
    return 0;
}

/*
1. Point Ŭ����:
    -> Point Ŭ������ 2���� ������ �� ���� ��Ÿ���� Ŭ����.
    -> ��� ������ x�� y�� ������ �ֽ��ϴ�. �̴� ���� x��� y���� ��ǥ�� ��Ÿ��.
    
2. Rectangle Ŭ����:
    -> Rectangle Ŭ������ ���簢���� ��Ÿ���� Ŭ����.
    -> ��� ������ upLeft�� lowRight�� ������ �ֽ��ϴ�.
        =>�̴� ���簢���� �»�ܰ� ���ϴ� ���� ��Ÿ��.
    -> ShowRecInfo �Լ��� ���簢���� ������ ����ϴ� �޼���.

3. ���� �Լ�:

    -> main �Լ������� �� ���� Point ��ü�� �����ϰ�, �̸� �̿��Ͽ� Rectangle ��ü�� ����.
    -> ù ��° Point ��ü pos1�� (-2, 4) ��ǥ.
    -> �� ��° Point ��ü pos2�� (5, 9) ��ǥ.
    -> �� �� ���� ������ ���ǵ� ���簢���� �����Ͽ� Rectangle ��ü rec�� save.
    -> rec.ShowRecInfo()�� ȣ���Ͽ� ���簢���� ������ ���.

*/