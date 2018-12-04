#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _node 
{
	int i;
	struct _node *nextadd;
}NODE;

NODE *firstnode = NULL;
NODE *lastnode = NULL;

void add(int num)
{
	NODE *newnode = (NODE *)malloc(sizeof(NODE));
	newnode->i = num;
	newnode->nextadd = NULL;
	if (firstnode == NULL)
	{
		firstnode = newnode;
		lastnode = newnode;
	}
	else
	{
		lastnode->nextadd = newnode;
		lastnode = newnode;
	}
}
int main()
{
	int input, i, input_num;
	printf("몇개 생성? : ");
	scanf("%d", &input);
	for (i = 1; i <= input; ++i) 
	{
		printf("%d번째 생성 \n값을 입력하시오 : ", i);
		scanf("%d", &input_num);
		add(input_num);

	return 0;
}
