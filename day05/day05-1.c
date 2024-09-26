#include <stdio.h>
#include <stdlib.h>
//void* malloc(size_t mem_size) , void free(void* ptr)

int main() {
	int N;
	int* s_num;
	char** name; //이중 포인터... 2차원 배열과 비슷
	int* score;

	printf("학생 수 입력: ");
	scanf_s("%d", &N);

	s_num = (int*)malloc(sizeof(int) * N);
	name = (char**)malloc(sizeof(char*) * N);
	// 이중 포인터 안 쓸 거면 (char*)malloc(N*100*sizeof(char)) 로 많이 늘려놓고 쪼개서 사용
	score = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) 
		name[i] = (char*)malloc(100 * sizeof(char));

	for (int i = 0; i < N; i++) {
		printf("학번: ");
		scanf_s("%d", &s_num[i]);

		printf("이름: ");
		scanf_s("%s", name[i], 100);

		printf("점수: ");
		scanf_s("%d", &score[i]);
	}

	for (int i = 0; i < N; i++)
		printf("학번: %d \t 이름: %s \t 점수: %d\n", s_num[i], name[i], score[i]); 
	// 이중 포인터 안 쓸 거면 name[i] -> name+(100*i)...?

	free(s_num);
	free(score);
	for (int i = 0; i < N; i++) free(name);
	s_num = NULL;
	score = NULL;
	name = NULL;

	return 0;
}