#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Grade
{
private:
	char* name;
	int kor;
	int eng;
	int math;

public:
	Grade(const char* name, int kor, int eng, int math)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);

		this->kor = kor;
		this->eng = eng;
		this->math = math;
	}
	~Grade()
	{
		printf("소멸자 호출\n");
		delete[] name;
	}
	int SUM()
	{
		int sum = kor + eng + math;
		return sum;
	}
	double AVR()
	{
		double avr = SUM() / 3.0;
		return avr;
	}
	int getKor()
	{
		return kor;
	}
	int getEng()
	{
		return eng;
	}
	int getMath()
	{
		return math;
	}

};

int main()
{
	// Grade* gradeAry[3];	// 객체 포인터 배열
	Grade gradeAry[3];

	char name[20];
	int inKor;
	int inEng;
	int inMath;

	// 1. 입력을 받는다.
	for (int i = 0; i < 3; i++)
	{
		cout << " 이름 : ";
		cin >> name;
		cout << " 국어점수 : ";
		cin >> inKor;
		cout << " 영어점수 : ";
		cin >> inEng;
		cout << " 수학점수 : ";
		cin >> inMath;

		// cout << name << inKor << inEng << inMath << endl;

	// 2. 객체생성 : 5개의 객체를 생성, 객체배열 or 객체 포인터 배열
		gradeAry[i] = new Grade(name, inKor, inEng, inMath);
	}

	for (int i = 0; i < 3; i++)
	{
		// cout << "총점 : " << gradeAry[i]->SUM() << "  " << "평균 : " << gradeAry[i]->AVR() << endl;
		printf("%d번째 학생 총점 : %d, 평균 : %.1lf\n", i + 1, gradeAry[i]->SUM(), gradeAry[i]->AVR());
	}

	for (int i = 0; i < 3; i++)
	{
		cout << gradeAry[i]->getKor() << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("객체 할당 소멸자 호출\n");
		delete gradeAry[i];
	}

	return 0;
}