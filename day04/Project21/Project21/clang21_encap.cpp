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
};

int main(void)
{
    // �� ��ü ����
    SinivelCap scap;    // �๰ ��
    Sneezcap zcap;      // ��ä�� ��
    Snufflecap ncap;    // ��ä�� ��

    // ���� ȯ�� ��ü ����
    ColdPatient sufferer;

    // ȯ�ڰ� ���� ����
    sufferer.TakeSinivelCap(scap);     // �๰ �� ����
    sufferer.TakeSneezcap(zcap);       // ��ä�� �� ����
    sufferer.TakeSnufflecap(ncap);     // ��ä�� �� ����

    return 0;
}
