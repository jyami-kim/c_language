#include <stdio.h>
struct TIME {
	int seconds;
	int minutes;
	int hours;
};
int main(void)
{
	int carry;
	struct TIME t1, t2, diff;
	printf("Enter start time: \n");
	printf("Enter hours, minutes and seconds respectively: ");
	scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
	printf("Enter stop time: \n");
	printf("Enter hours, minutes and seconds respectively: ");
	scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

	if ((t1.seconds - t2.seconds) > 0) {
		diff.seconds = (t1.seconds - t2.seconds);
		carry = 0;
	}
	else {
		diff.seconds = 60 + (t1.seconds - t2.seconds);
		carry = 1;
	}

	if ((t1.minutes - t2.minutes) > 0) {
		diff.minutes = (t1.minutes - t2.minutes) - carry;
		carry = 0;
	}
	else {
		diff.minutes = 60 + (t1.minutes - t2.minutes) - carry;
		carry = 1;
	}

	if ((t1.hours - t2.hours) > 0) {
		diff.hours = (t1.hours - t2.hours) - carry;
	}
	else {
		diff.hours = 60 + (t1.hours - t2.hours) - carry;
	}

	printf("\nTIME DIFFERENCE: %d:%d:%d - ",t1.hours,t1.minutes,t1.seconds);
	printf("%d:%d:%d ", t2.hours, t2.minutes, t2.seconds);
	printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

	return 0;
}