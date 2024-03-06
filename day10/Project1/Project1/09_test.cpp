/*
	5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 과목별 총점과 평균을 구하시오.
*/

#include <iostream>
using namespace std;

class Grade
{
private:
	char* name;
	int kor;
	int math;
	int english;
public:
	Grade(const char* myname, int mykor, int mymath, int myenglish)
		: kor(mykor), math(mymath), english(myenglish)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		kor = mykor;
		math = mymath;
		english = myenglish;
	}
	~Grade()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
	int SUM() const
	{
		return (kor + math + english);
	}
	int AVG() const
	{
		return SUM() / 3;
	}
};

int main()
{
	int kor


	return 0;
}