#include	<stdio.h>
#include	<stdlib.h>
typedef struct nd *listPtr;
typedef struct nd {
	int data;
	listPtr link;
}	node;
void insertFront(listPtr *list, listPtr node);

int main(void)
{
	int	i;
	listPtr list = NULL;
	listPtr temp;
	printf("Enter	integers:	\n");
	while (1) {
		scanf("%d", &i);
		if (i == 0)
			break;
		temp = (listPtr)malloc(sizeof(node));
		temp->data = i;
		temp->link = NULL;
		insertFront(&list, temp);
	}
	printf("You	entered\n");
	for (temp = list; temp != NULL; temp = temp->link)
		printf("%d	", temp->data);
	printf("\n");
	return 0;
}

void	insertFront(listPtr *list, listPtr node)
{
	if (*list) {
		node->link = *list;
	}
	*list = node;
}