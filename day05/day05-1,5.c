#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	int snum;
	char *name;
	int score;
};

int main() {
	int N;
	struct Student person[2];

	person[0].snum = 1111; 
	person[0].name = (char*)malloc(sizeof(char) * 50); //필요한 만큼 할당.. 아어렵다
	strcpy_s(person[0].name, 50, "철수");
	person[0].score = 100;

	printf("%d %s %d", person[0].snum, person[0].name, person[0].score);
	//구조체 값 접근하기 위해 점(.)을 쓴다...
	
	return 0;
}