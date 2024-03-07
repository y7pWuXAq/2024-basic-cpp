#include <iostream>
using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "*****************" << endl;
	char ary[6] = { 'a', 'b', 'c', 'd', 'e'};	// 문자열 타입의 배열 선언
	cout << ary << endl;

	printf("***************\n");

	char ary1[6] = { 'a', 'b', 'c', '|0', 'e' };	// 널문자 - 문자열의 끝을 알린다.
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;	// sizeof : 전체 문자 크기
	cout << strlen(ary1) << endl;	// 널문자 앞까지의 크기

	printf("***************\n");

	char str[] = "string";	// 자동으로 널 문자가 붙는다.
	cout << str << endl;
	cout << sizeof(str) << endl;	// 널문자가 포함된 크기
	cout << strlen(str) << endl;

	str[0] = 'S';
	cout << str << endl;
	printf("***************\n");

	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;	// ptsr 포인터의 크기
	int a = 100;
	int* pa = &a;
	cout << strlen(pstr) << endl;	
	//pstr[0] = 's';	// 문자열을 포인터로 사용하는 것은 안된다.,

	/*
		C++ - style
	*/

	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	// cout<<strlen(s)<<endl;
	cout << s.size() << endl;

	string s1 = "abcdefghijk";
	cout << sizeof(s1) << endl;
	cout << s.size(s1) << endl;

	return 0;
}