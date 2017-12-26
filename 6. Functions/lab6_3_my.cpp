#include <stdio.h>

int IsSameRealNumbers(float a, float b);

int main(void) {
	float a, b;
	printf("Enter two floating-point numbers: ");
	scanf("%f %f", &a, &b);
	if (IsSameRealNumbers(a, b) == 1)
		printf("%.4f and %.4f are the same up to two fractional digits\n",a,b);
	else 
		return 0;
}

int IsSameRealNumbers(float a, float b) {
	if ((int)(a * 100) == (int)(b * 100))
		return 1;
	else
		return 0;
}