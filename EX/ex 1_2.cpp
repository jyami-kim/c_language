#include <stdio.h>
int main(void) {
	int i;
	for (i = 1;i <= 20;i++) {
		switch (i) {
		case 3:
		case 6:
		case 9:
		case 13:
		case 16:
		case 19:
			printf("Clap! ");
			break;
		default:
			printf("%d ", i);
			break;
		}
	}
	printf("\n");
	return 0;
}