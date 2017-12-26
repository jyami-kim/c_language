#include <stdio.h>

int gcd(int m, int n);
int main(void) {
	int m, n;
	printf("Enter two positive integer numbers\n");
	scanf("%d %d", &m, &n);
	printf("The GCD of %d and %d is %d\n", m, n, gcd(m, n));

	return 0;
}
int gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m%n);
}