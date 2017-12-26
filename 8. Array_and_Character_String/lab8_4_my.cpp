#include <stdio.h>
int main(void) {
	int quo;
	int i = 0;
	int rem[4];
	scanf("%d", &quo);
	for (;i < 4;i++) {
		rem[i] = (quo % 2);
		quo = (quo / 2);
		if (quo == 0)
			break;
	}
	for (;i>-1;i--)
		printf("%d ", rem[i]);
	return 0;
}