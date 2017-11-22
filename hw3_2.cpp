#include <stdio.h>

int main(void) {
	int list[100];
	int num=0;
	int index = 0;
	int min, exc = 0;
	printf("Enter integers(-1 to stop)\n");
	while (num != -1) {
		scanf("%d", &num);
		if(num!=-1)
			list[index++] = num;
	}
	for (int i = 0;i < index;i++) {
		min = list[i];
		for (int j = i;j < index -1;j++) {
			if (list[j] > list[j + 1])
				min = j+1;
		}
		if (min != list[i]) {
			exc = list[min];
			list[min] = list[i];
			list[i] = exc;
		}
	}

	printf("Sorted list: ");
	for (int k = 0; k < index; k++) {
		printf("%d ", list[k]);
	}

	return 0;
}
