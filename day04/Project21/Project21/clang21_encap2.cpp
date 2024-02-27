#include <iostream>
using namespace std;

// ��ü�⸦ ���� �� Ŭ����
class Sneezcap
{
public:
    void Take() const { cout << "��ü�Ⱑ �ܽ��ϴ�" << endl; }
};

// �๰�� ���ߴ� �� Ŭ����
class SinivelCap
{
public:
    void Take() const { cout << "�๰�� ����ϴ�" << endl; }
};

// ��ä�⸦ ���ߴ� �� Ŭ����
class Snufflecap
{
public:
    void Take() const { cout << "��ä�Ⱑ ����ϴ�" << endl; }
};

// Contac600 �� Ŭ����
class Contac600
{
public:
    void Take() const { cout << "Contac600�� �����մϴ�." << endl; }
};

// ���� ȯ�� Ŭ����
class ColdPatient
{
public:
    // �๰ ���� �����ϴ� �Լ�
    void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }

    // ��ä�� ���� �����ϴ� �Լ�
    void TakeSneezcap(const Sneezcap& cap) const { cap.Take(); }

    // ��ä�� ���� �����ϴ� �Լ�
    void TakeSnufflecap(const Snufflecap& cap) const { cap.Take(); }

    // Contac600 ���� �����ϴ� �Լ�
    void TakeContac600(const Contac600& cap) const { cap.Take(); }
};

int main(void)
{
    // �� ��ü ����
    SinivelCap scap;        // �๰ ��
    Sneezcap zcap;          // ��ä�� ��
    Snufflecap ncap;        // ��ä�� ��
    Contac600 contac600;    // Contac600 ��

    // ���� ȯ�� ��ü ����
    ColdPatient sufferer;

    // ȯ�ڰ� ���� ����
    sufferer.TakeSinivelCap(scap);     // �๰ �� ����
    sufferer.TakeSneezcap(zcap);       // ��ä�� �� ����
    sufferer.TakeSnufflecap(ncap);     // ��ä�� �� ����
    sufferer.TakeContac600(contac600); // Contac600 �� ����

    return 0;
}
