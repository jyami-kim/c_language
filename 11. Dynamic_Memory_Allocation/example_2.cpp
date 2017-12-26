#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
	int arr[MAX_SIZE];
	int n = 0, i, num;
	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		arr[n++] = num;
	}
	for (i = 0;i < n;i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}