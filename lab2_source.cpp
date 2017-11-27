#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

int main(int argc, char**argv){
	int A[MAX_ROW][MAX_COL];
	int B[MAX_ROW][MAX_COL];
	int row_a, col_a, row_b, col_b;
	int i,j;

	printf("A row?\n");
	scanf("%d",&row_a);

	printf("A col?\n");
	scanf("%d",&col_a);

	for(i=0; i<row_a; i++){
		for(j=0;j<col_a;j++){
			printf("A[%d][%d]?\n",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	printf("B row?\n");
	scanf("%d",&row_b);

	printf("B col?\n");
	scanf("%d",&col_b);

	for(i=0; i<row_b; i++){
		for(j=0;j<col_b;j++){
			printf("B[%d][%d]?\n",i,j);
			scanf("%d",&B[i][j]);
		}
	}

	printf("\nA=\n");
	for(i=0;i<row_a;i++){
		for(j=0;j<col_a;j++){
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}

	printf("\nB=\n");
	for(i=0;i<row_b;i++){
		for(j=0;j<col_b;j++){
			printf("%3d",B[i][j]);
		}
		printf("\n");
	}

	if(row_a==row_b && col_a==col_b){
		printf("the size of A and B is SAME\n");
	}else{
		printf("the size of A and B is DIFFERENT\n");
	}

	return 0;
}