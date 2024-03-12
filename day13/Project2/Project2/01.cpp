/*
	char ary[] = {'a', 'b', 'c', 'd', 'e', 'f'}
	조건 : while 문과 if 문만으로 배열 순서를 바꾸어 저장 출력하시오
*/

#include <iostream>
using namespace std;

int main() {
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int length = sizeof(ary) / sizeof(ary[0]);// 배열의 전체 크기를 자료형 크기로 나누면 => 배열의 길이
    cout << "바꾸기 전 배열: ";
    for (int i = 0; i < length; i++) {
        cout << ary[i]; // 배열 요소를 하나씩 출력
    }
    cout << endl;
    int i = 0;
    while (i < length / 2) {      // 배열을 절반으로 나누어서 앞쪽 요소값을 뒤쪽 요소값과 바꿔좀
        char temp = ary[i];         // 바꾸기 전 요소값 temp에 저장
        ary[i] = ary[length - i - 1];   // 앞쪽 0,1,2 인덱스의 요소값 5,4,3 인덱스 요소값으로 변환
        ary[length - i - 1] = temp;        // 인덱스 5,4,3의 요소값에 변환 전 0,1,2 요소값으로 변환
        i++;
    }


    cout << "바꾼 후 배열: ";
    for (int i = 0; i < length; i++) {
        cout << ary[i]; // 배열 요소를 하나씩 출력
    }
    cout << endl;
    return 0;
}