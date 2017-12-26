#include <stdio.h>
void sumit(void);
int main(void) {
	int count;
	printf("Please enter 5 numbers to be summend\n");
	for (count = 0; count < 5;count++)
		sumit();
	return 0;
}
void sumit(void) {
	int num;
	static int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	sum += num;
	printf("the current total is %d\n", sum);
}