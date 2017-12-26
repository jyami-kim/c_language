#include <stdio.h>
#include <stdlib.h>

int* input_arr(int n)
{
	int *arr;
	arr = (int *)malloc(sizeof(int)*n);
	for (int i = 0;i<n;i++)
		scanf("%d", &arr[i]);
	return arr;
}

int main(void)
{
	int *arr;
	int i, n;

	printf("n? ");
	scanf("%d", &n);

	arr = input_arr(n);

	for (i = 0;i<n;i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	free(arr);

	return 0;
}