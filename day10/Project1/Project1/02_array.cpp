#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };	// int 형 배열 선언
	int* parr = arr;	// 배열의 이름은 주소!! 암기!

	printf("arr 주소 : %p\n", arr);
	printf("arr 크기 : %d\n", sizeof(arr));	// int 크기 4 x 방 갯수(5) = 20 byte
	
	printf("arr[0] 주소 : %p\n", &arr[0]);	// 0번방의 주소는 배열의 시작 주소와 같다.
	printf("arr[1] 주소 : %p\n", &arr[1]);

	// ***********************
	printf("parr 주소 : %p\n", &parr);
	printf("parr 데이터 : %p\n", parr);
	printf("parr + 1 : %p\n", parr + 1);
	printf("parr[0] :   *pa : %d   arr[0] : %d\n", parr[0], *parr, arr[0]);

	return 0;
}