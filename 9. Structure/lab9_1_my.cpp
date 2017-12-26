#include <stdio.h>

struct Time {
	int seconds;
	int minutes;
	int hours;
};

int main(void) {
	struct Time t1, t2, diff;
	printf("Enter start time: \n");
	printf("Enter hours, minutes and seconds respectively: ");
	scanf("%d %d %d", &t1.hours, &t1.minutes,&t1.seconds);
	printf("Enter stop time: \n");
	printf("Enter hours, minutes and seconds respectively: ");
	scanf("%d %d %d", &t2.hours, &t2.minutes,&t2.seconds);

	diff.seconds = t1.seconds - t2.seconds;
	diff.minutes = t1.minutes - t2.minutes;
	diff.hours = t1.hours - t2.hours;
	if (diff.seconds < 0) {
		diff.seconds += 60;
		diff.minutes -= 1;
	}
	if (diff.minutes < 0) {
		diff.minutes += 60;
		diff.hours -= 1;
	}
	

	printf("\nTIME DIFFERENCE: %d:%d:%d - ", t1.hours, t1.minutes, t1.seconds);
	printf("%d:%d:%d", t2.hours, t2.minutes, t2.seconds);
	printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

	return 0;
}