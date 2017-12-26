#include	<stdio.h>
int main(void)
{
	int A[2][3]={{1,2,3},{4,5,6}};
	int B[2][3]={{6,5,4},{3,2,1}};
	int plus[2][3],minus[2][3];
	int i,j;
	printf("Plus\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			plus[i][j] = A[i][j] + B[i][j];
			printf("%d	",plus[i][j]);
		}
		printf("\n");
	}
	printf("Minus\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			minus[i][j] = A[i][j] - B[i][j];
			printf("%d	",minus[i][j]);
		}
		printf("\n");
	}
}