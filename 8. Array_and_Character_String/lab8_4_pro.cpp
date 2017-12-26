#include <stdio.h>
int main(void)
{
	int num, i;
	int rem[8];
	scanf("%d", &num);
	for (i = 0; num; i++) {
		rem[i] = (num % 2);
		num /= 2;
	}

	for (;i>0;) {
		printf("%d", rem[--i]);
	}
	return 0;
}