#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

int main(int argc, char **argv)
{
	int A[MAX_ROW][MAX_COL];
	int B[MAX_ROW][MAX_COL];
	int row,col;
	int i,j;

	printf("row?\n");
	scanf("%d",&row);

	printf("col?\n");
	scanf("%d",&col);

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ; j<col ; j++)
		{
			printf("A[%d][%d]?\n",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ;j<col ;j++)
		{
			printf("B[%d][%d]?\n",i,j);
			scanf("%d",&B[i][j]);
		}
	}

	printf("\nA = \n");

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ; j<col ; j++)
		{
			printf("%3d",A[i][j]);
		}

		printf("\n");
	}

	printf("\nB = \n");

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ; j<col ; j++)
		{
			printf("%3d",B[i][j]);
		}

		printf("\n");
	}

	return 0;
}