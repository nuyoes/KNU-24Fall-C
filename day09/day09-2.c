#include <stdio.h>
#include <string.h>

typedef struct Product {
	int id;
	char name[20];
	int price;
} PRODUCT;

PRODUCT P[5];
int sum = 0;

//상품 정보 출력 함수, 구조체 변수 하나를 인자로 받도록 구현
printProduct() {
	printf("\n<<입력된 상품 목록>>\n");
	for (int i = 0; i < sum; i++) {
		printf("상품 ID : %d\n", P[i].id);
		printf("상품명 : %s\n", P[i].name);
		printf("가격 : %d원\n", P[i].price);
		printf("\n");
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		printf("상품 정보를 입력하세요 (입력 중단은 id에 0 입력)\n");
		printf("상품 ID : ");
		scanf("%d", &(P[i].id));  //왜 P[i].id로 써야 되지? 
		if (P[i].id == 0) break;
		sum++;
		printf("상품명 : ");
		scanf("%s", P[i].name);
		printf("가격 : ");
		scanf("%d", &(P[i].price));
		printf("\n");
	}

	printProduct();

	return 0;
}