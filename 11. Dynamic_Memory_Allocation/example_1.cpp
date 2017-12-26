#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
	int n = 0, i;
	int arr[MAX_SIZE];
	printf("n=? ");
	scanf("%d", &n);
	for (i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for (i = 0;i < n;i++)
		printf("arr[%d]=%d\n",i, arr[i]);
	return 0;
}