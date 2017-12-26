#include <stdio.h>
int r369(int num);
int main(void) {
	int i, ret;
	while (1) {
		printf("Please enter a number\n");
		scanf("%d", &i);
		if (i == 0)
			break;
		ret = r369(i);
		if (ret == 0)
			printf("%d\n", i);
		else
			printf("\n");
	}
	return 0;
}

int r369(int num) {
	int digit, ret = 0, rret=0;
	digit = num % 10;
	if ((digit != 0) && ((digit % 3) == 0)) {
		printf("Clap! ");
		ret = 1;
	}
	if (num / 10 > 0)
		rret = r369(num / 10);
	if (ret == 1 || rret == 1)
		return 1;
	else
		return 0;
}