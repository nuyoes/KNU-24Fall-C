#include <stdio.h>
#include <string.h>

// 1차 저장... 선배가 알려준 걸 보자...

void reverse(char *s) {
	int len = strlen(s) - 1; //마지막에 공백이 저장되니 길이를 하나 빼 줌
	char* p = len + s;  //모르게슨데?

	while (p >= s) {
		printf("%c", *p);
		p--;
	}
}

int main() {
	// string 포인터 하나만 만들어서 얠 내부에서 뒤집으래... 2개 만들어서 복사하는 거 아님
	char* s[100];

	scanf_s("%s", &s, sizeof(s));

	reverse(s);

	return 0;
}