﻿#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
		ACC_STEP=10, BRK_STEP=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(const char * ID, int fuel)	// 필드의 초기화를 담당하는 메서드
{
	strcpy(gamerID, ID);	// 전달된 ID의 문자열을 복사해서 gamer ID에 저장
	fuelGauge = fuel;
	curSpeed = 0;			// 시작 할 때 항상 0으로 시작
}

void Car::ShowCarState()
{
	cout << "소유자 : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99;							// class car 타입의 객체 run99 생성
	run99.InitMembers("run99", 100);	// run99 객체의 InitMembers() 메서드 호출
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}