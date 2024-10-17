#include <stdio.h>
#include <stdlib.h>
#define len 10

// 1차 저장...

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
 
//여기 수정해야 댐
void* movePointer(void* arr) { //왜 void형 포인터를 사용할까...? int..면안되나? 포인터 매개변수를 잘 모르겐는데
	int* arrPointer = arr; //배열의 첫 번째 주소
	int i = 0, j = 0;

	printf("현재 위치 : (0, 0), 배열의 값 : % d)", *arrPointer);
	
	while (1) {
		if (arrPointer <= 100) {
			printf("현재 위치 : (% d, % d), 배열의 값 : % d)", i, j, *(arrPointer + 1); //킵킵킵
		}
		else break;
	}
	
}


int main() {
	//기본 코드?
	fillRandom();
	printArray();
	movePointer(arr);



	return 0;
}