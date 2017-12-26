#include <stdio.h>
int main(void) {
	int i;
	for (i = 1;i <= 20;i++) {
		if (i == 3 || i == 6 || i == 9 || i == 13 || i == 16 || i == 19)
			printf("Clap! ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}