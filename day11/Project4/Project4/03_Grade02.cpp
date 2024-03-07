#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class Grade
{
private:
	char* name;
	int kor;
	int english;
	int math;
public:
	Grade(const char* myname, int mykor, int myenglish, int mymath)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		kor = mykor;
		math = mymath;
		english = myenglish;
	}
	Grade()
	{
		name = NULL;
		kor = 0;
		math = 0;
		english = 0;
	}
	~Grade()
	{
		cout << "called destructor!" << endl;
	}
	void SetGradeInfo(char* myname, int mykor, int mymath, int myenglish)
	{
		name = myname;
		kor = mykor;
		math = mymath;
		english = myenglish;
	}
	int SUM() const
	{
		return (kor + math + english);
	}
	double AVR() const
	{
		return SUM() / 3.0;
	}
	int getKor()
	{
		return kor;
	}
	int getEng()
	{
		return english;
	}
	int getMath()
	{
		return math;
	}
};

int main()
{
	Grade gradeAry[3];

	char name[20];
	int inKor = 0;
	int inEng = 0;
	int inMath = 0;
	int num = 0;

	cout << "성적 처리 할 학생 수 : ";
	cin >> num;

	// vector<Grade*> gradeArt(num);
	// vector<Grade> gradeArt(num);

	for (int i = 0; i < num; i++)
	{
		cout << " 이름 : ";
		cin >> name;
		cout << " 국어점수 : ";
		cin >> inKor;
		cout << " 영어점수 : ";
		cin >> inEng;
		cout << " 수학점수 : ";
		cin >> inMath;
		gradeAry[i].SetGradeInfo(name, inKor, inEng, inMath);
	}

	for (int i = 0; i < num; i++)
	{
		// cout << "총점 : " << gradeAry[i]->SUM() << "  " << "평균 : " << gradeAry[i]->AVR() << endl;
		printf("%d번째 학생 총점 : %d, 평균 : %.1lf\n", i + 1, gradeAry[i].SUM(), gradeAry[i].AVR());
	}

	int sumKor = 0;
	int sumEng = 0;
	int sumMath = 0;

	for (int i = 0; i < num; i++)
	{
		// sumKor +=gradeAry[i].getKor();
		sumKor = sumKor + gradeAry[i].getKor();
		sumEng = sumEng + gradeAry[i].getEng();
		sumMath = sumMath + gradeAry[i].getMath();
	}

	//float(size(gradeAry)) = 배열의 크기를 실수로 변환
	printf("국어 총점 : %d, 국어 평균 : %.1lf\n", sumKor, sumKor/float(size(gradeAry)));
	printf("영어 총점 : %d, 영어 평균 : %.1lf\n", sumEng, sumEng/ float(size(gradeAry)));
	printf("수학 총점 : %d, 수학 평균 : %.1lf\n", sumMath, sumMath/ float(size(gradeAry)));

	return 0;
}