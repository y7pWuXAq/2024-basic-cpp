#pragma once


class HUMAN {
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(const char * name, int age, const char * job);
	void HumanInfo();
};