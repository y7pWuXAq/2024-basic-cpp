﻿#include <iostream>
#include <vector>
using namespace std;

int main()
{
/*
	vector<int> v;	// int 타입의 vector 생성

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		printf("v[%d] : %d\n", i, v[i]);
		printf("v.size() : %u\n", v.size());	// size는 들어있는 원소의 갯수
		printf("v.capacity() : %d\n", v.capacity());	// 메모리 공간
	}

		v.push_back(20);
		v.push_back(21);
		
		for (vector<int>::size_type i = 0; i < v.size(); i++)
		{
			printf("v[%d] : %d\n", i, v[i]);
			printf("v.at(i) : %d\n", v.at(i));
		}

		cout << "iterator : 반복자" << endl;
		vector<int> ::iterator iter;
		for (iter = v.begin(); iter != v.end(); iter++)
		{
			cout << "*iter : " << *iter << endl;
		}
*/

		vector<string> vs;
		vs.push_back("Hi");
		vs.push_back("Hello");
		vs.push_back("안녕");
		cout << "vs.front() : " << vs.front() << endl;
		cout << "vs.back() : " << vs.back() << endl;

		vector<string> ::iterator it;
		for (it = vs.begin(); it != vs.end(); it++)
		{
			cout << "*it : " << *it << endl;
		}

		vector<int> v1;	// 크기가 0인 벡터가 생성
		vector<int> v2(5);	// 크기가 5인 백터가 생성 (0으로 초기화)
		vector<int> v3 = {10, 20, 30};
		vector<int> v4(10, 7);	// 크기가 10이고 7로 초기화


	return 0;
}