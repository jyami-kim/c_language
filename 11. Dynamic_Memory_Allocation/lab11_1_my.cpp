#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int *arr = NULL;
	printf("n=? ");
	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int)*n);
	for (int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for (int i = 0;i < n;i++)
		printf("arr[%d]=%d\n", i, arr[i]);
	free(arr);
	*arr = NULL;

	return 0;
}