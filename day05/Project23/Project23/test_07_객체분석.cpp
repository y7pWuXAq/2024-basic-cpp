#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;
public :
	Human(const char * pname, int aage) {
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		age = aage;
	}
	void HumanInfo() {
		cout << "이름 : " << name << " ";
		cout << "나이 : " << age << endl;
	}
	~Human() {
		cout << "소멸자 호출" << endl;
	}
};

int main(void)
{
	Human h[3] = { Human("서여름", 40), Human("이라빈", 23), Human("임수언", 20) };	// 객체 배열

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("함소화", 40);	// 
	h1->HumanInfo();	// 주소값에 접근, 간접적
	// h1.HumanInfo();	// 일반 객체 사용, 직접적
	delete h1;

	return 0;
}