#include <stdio.h>
#include <stdlib.h>
#define len 10

int arr[len][len];

void fillRandom() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			arr[i][j] = rand() % 20 + 1;
	}
}

void printArray() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
 
void* movePointer(void* arr) { //Q. 왜 void형 포인터를 사용할까...?
	int* arrPointer = arr; //배열의 첫 번째 주소값 저장
	int a = 0, b = 0, end = 0, sum = 0;

	while(!end){
		printf("현재 위치 : (%d, %d), 배열의 값 : %d\n", a, b, *arrPointer);
		sum += *arrPointer;

		if(sum>=100){
			printf("더 이상 이동할 수 없습니다. \n");
			printf("종료 위치 : (%d, %d), 배열의 값 : %d\n", a, b, *arrPointer);
			end=1;
		} else {
			b += *arrPointer;
			arrPointer += *arrPointer;
			while(b>10){
				b -= 10;
				a += 1;
			}
		}
	}
}


int main() {
	fillRandom();
	printArray();
	movePointer(arr);

	return 0;
}