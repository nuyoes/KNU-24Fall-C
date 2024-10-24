#include <stdio.h>

typedef struct Vector{
	int x;
	int y;
	int z;
} VECTOR;

VECTOR V[2];
int Xresult, Yresult, Zresult;

//벡터의 합
void sum(){
	Xresult = V[0].x + V[1].x;
	Yresult = V[0].y + V[1].y;
	Zresult = V[0].z + V[1].z;

	printf("벡터의 합은  x:%d  y:%d  z:%d\n", Xresult, Yresult, Zresult);
}

//벡터의 차
void dfr(){
	Xresult = V[0].x - V[1].x;
	Yresult = V[0].y - V[1].y;
	Zresult = V[0].z - V[1].z;

	printf("벡터의 차는  x:%d  y:%d  z:%d\n", Xresult, Yresult, Zresult);
}

//벡터의 내적
void innerP(){
	Xresult = V[0].x * V[1].x;
	Yresult = V[0].y * V[1].y;
	Zresult = V[0].z * V[1].z; 

	printf("벡터의 내적은  vec1ㆍvec2 = %d\n", Xresult + Yresult + Zresult);
}

//벡터의 외적
void outerP(){
	Xresult = V[0].y * V[1].z - V[0].z * V[1].y;
	Yresult = V[0].z * V[1].x - V[0].x * V[1].z;
	Zresult = V[0].x * V[1].y - V[0].y * V[1].x;

	printf("벡터의 외적은  x:%d  y:%d  z:%d\n", Xresult, Yresult, Zresult);
}


int main(){
	int temp[3];
	int input_data;

	printf("첫 번째 벡터(x,y,z) : ");
	for(int i=0;i<3;i++)
		scanf("%d", &temp[i]);

	V[0].x = temp[0];
	V[0].y = temp[1];
	V[0].z = temp[2];

	printf("두 번째 벡터(x,y,z) : ");
	for(int i=0;i<3;i++)
		scanf("%d", &temp[i]);

	V[1].x = temp[0];
	V[1].y = temp[1];
	V[1].z = temp[2];

	printf("입력된 첫 번째 벡터 \t %d, \t %d, \t %d\n", V[0].x, V[0].y, V[0].z);
	printf("입력된 두 번째 벡터 \t %d, \t %d, \t %d\n", V[1].x, V[1].y, V[1].z);

	while(1){
		printf("==============================\n");
		printf("1. 벡터의 합\n");
		printf("2. 벡터의 차\n");
		printf("3. 벡터의 외적\n");	
		printf("4. 벡터의 내적\n");
		printf("5. 종료\n");
		printf("==============================\n");

		printf("명령 입력:");
		scanf("%d", &input_data);

		if(input_data==1) sum();
		else if(input_data==2) dfr();
		else if(input_data==3) innerP();
		else if(input_data==4) outerP();
		else {
			printf("프로그램을 종료합니다.");
			break;
		}
	}

	return 0;
}