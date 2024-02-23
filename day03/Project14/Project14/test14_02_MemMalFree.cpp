#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char *MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // C : heep 영역에 메모리 할당, 크기는 20Byte
	printf("char size : %llu\n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so Happy~");
	cout << str << endl;
	free(str);
	return 0;
}