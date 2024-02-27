#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private :
	char* name;
	int age;
public :
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1; // strlen() : 문자열의 길이를 구하는 함수, strlen은 문자의 갯수만 문자열!은 +1 필요
		name = new char[len]; // new : 힙영역에 메모리 재할당
		cout << "char 크기 : " << sizeof(char) << endl;
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person()		// 소멸자 : 호출 안해도 자동으로 호출
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}