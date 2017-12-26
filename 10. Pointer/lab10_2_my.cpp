#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

int main(int argc, char **argv) {
	int A[MAX_ROW][MAX_COL];
	int B[MAX_ROW][MAX_COL];
	int rowa, cola, rowb, colb;
	int i, j;

	printf("A row?\n");
	scanf("%d", &rowa);

	printf("A col?\n");
	scanf("%d", &cola);

	for (i = 0;i < rowa;i++) {
		for (j = 0;j < cola;j++) {
			printf("A[%d][%d]", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nA=\n");

	for (i = 0;i < rowa;i++) {
		for (j = 0;j < cola;j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}

	printf("B row?\n");
	scanf("%d", &rowb);

	printf("B col?\n");
	scanf("%d", &colb);

	for (i = 0;i < rowb;i++) {
		for (j = 0;j < colb;j++) {
			printf("B[%d][%d]", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	printf("\nB=\n");
	for (i = 0;i < rowb;i++) {
		for (j = 0;j < colb;j++) {
			printf("%3d", B[i][j]);
		}
		printf("\n");
	}

	if ((rowa == rowb) && (cola == colb))
		printf("A and B are the same");

	return 0;

}