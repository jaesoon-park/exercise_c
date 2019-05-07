#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _Node {
	int Array;
	struct _Node* link;
};

typedef struct _Node Node;

int main()
{
	Node *head = NULL;
	Node *tmp = NULL;
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;

	node1 = (Node*)malloc(sizeof(Node));
	if (node1 == NULL) {
		printf("malloc()error\n");
		exit(1);//Å»Ãâ
	}
	node2 = (Node*)malloc(sizeof(Node));
	if (node2 == NULL) {
		printf("malloc()error\n");
		exit(1);//Å»Ãâ
	}
	node3 = (Node*)malloc(sizeof(Node));
	if (node3 == NULL) {
		printf("malloc()error\n");
		exit(1);//Å»Ãâ
	}
	node1->Array = 1;
	node1->link = node2;
	node2->Array = 2;
	node2->link = node3;
	node3->Array = 3;
	node3->link = NULL;
	head = node1;

	tmp = head;


	while (1) {

		if (tmp == NULL)
			break;
		else
			printf("%d ", tmp->Array);
		tmp->Array;
		tmp = tmp->link;
	}
	free(node1);
	if (node1 != NULL) {
		free(node1);
		node1 = NULL;
	}
	free(node2);
	if (node2 != NULL) {
		free(node1);
		node1 = NULL;
	}
	free(node3);
	if (node3 != NULL) {
		free(node1);
		node1 = NULL;
	}


}
