#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str);  // 문자열 길이
    char* strPointer = str + len - 1; // str(시작주소) + len - 1(문자열 마지막 문자 주소, 공백 문자 제외해야 되니까 -1)

    // 처음과 끝을 가리키는 두 포인터 사용
    while (str < strPointer) { // 등호는 제외 (어차피 둘 다 가운데 문자 포인터를 가리킬 땐 교환해 봤자 결과가 달라지지 않음)
        // str과 strPointer가 가리키는 문자의 값을 교환
        char temp = *str;
        *str = *strPointer;
        *strPointer = temp;
        str++;
        strPointer--;
		// 처음과 끝을 바꾸며 가운데에서 만나게 함
    }
}

int main() {
    char str[100];

    printf("문자열을 입력하세요(공백, 특수문자 제외): ");
    scanf("%s", str); // 문자열 입력, VSCode 환경이라 scanf의 보안 문제는 무시함

    reverse(str);  // 문자열 뒤집는 함수

    printf("뒤집힌 문자열: %s\n", str); // 뒤집힌 문자열 출력

    return 0;
}