#include <stdio.h>
#include <stdlib.h>

// 노드 생성
struct NODE {
	int data;
	struct NODE* link;
};

struct NODE* head = NULL; //전역변수 head를 포인터로 선언 

struct NODE* create_node(int data) { 
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	new_node->data = data;
	new_node->link = NULL;

	return new_node;
}

struct NODE* last_node() {
	struct NODE* cur = head; //cur은 현재 노드라는 뜻의 변수로 임의 생성
	while (cur->link != NULL) {
		cur = cur->link;
	}
	return cur;
}

struct NODE* insert_node_last(struct NODE* new_node) {
	struct NODE* last = last_node();
	last->link = new_node;
}

// 노드 순회
void print_nodes() {
	struct NODE* cur = head->link;
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->link;
	}
}

struct NODE* find_node(int value) {
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (cur->data == value) return cur;
		cur = cur->link;
	}
}

//노드 삭제 함수
int delete_node(int value) {
	struct NODE* prev = head;
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (cur->data == value) {
			prev->link = cur->link;
			free(cur); //free(): 동적할당이 되어 있는 변수를 없애주는 함수
			return 1;
		}
		prev = cur;
		cur = cur->link;
	}
	return 0;
}

int main() {
	head = (struct NODE*)malloc(sizeof(struct NODE));
	head->link = NULL; // 구조체는 점(.)으로 접근, 포인터는 화살표(->)로 접근?

	// 노드 5개 추가
	insert_node_last(create_node(1));
	insert_node_last(create_node(2));
	insert_node_last(create_node(3));
	insert_node_last(create_node(4));
	insert_node_last(create_node(5));
	/* 위 코드는 아래 코드랑 의미가 같다
	struct NODE* node = create_node(1);
	insert_node_last(node);
	*/

	// 연결리스트 출력
	printf("<현재 연결리스트 출력>\n");
	print_nodes();


	// 3이라는 값을 갖고 있는 노드 삭제
	delete_node(3);

	// 연결리스트 출력
	printf("<삭제 후 연결리스트 재출력>\n");
	print_nodes();

	return 0;
}