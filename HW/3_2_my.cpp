#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
	int arr[MAX_SIZE];
	int sort_list[MAX_SIZE];
	int max = 0;
	int exc, min;
	printf("Enter integers(-1 to stop)\n");
	for (int i = 0;i < MAX_SIZE;i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
			break;
		max++;
	}


	for (int j=0;j<max;j++){
		min = j;
		for (int i = j;i < max - 1;i++) {
			if (arr[i] > arr[i + 1])
				min = i + 1;
		}
		exc = arr[min];
		arr[min] = arr[j];
		arr[j] = exc;
	}

	printf("Sorted list: ");
	for (int k = 0;k < max;k++) {
		printf("%d", arr[k]);
	}
	printf("\n");
	return 0;
}