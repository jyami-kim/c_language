#include <stdio.h>

int main(void) {
	int i, first, second;
	for (i = 1, first = 0, second = 0;i <= 50;i++, first = i / 10, second = i % 10) {
		printf((first == 3) ? "Clap!" : "");
		printf(((second % 3 == 0) && second) ? "Clap!" : "");
		printf(((first == 3) || ((second % 3 == 0) && second)) ? "" : "%d", i);
	}
	return 0;
}