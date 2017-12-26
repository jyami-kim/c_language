#include <stdio.h>

int sumofn(int n);

int main(void) {
	int n;
	printf("n=? ");
	scanf("%d", &n);
	printf("%d",sumofn(n));

}

int sumofn(int n) {
	int sum;
	if (n > 0)
		sum = n + sumofn(n - 1);
	else
		sum = 0;
	return sum;
}