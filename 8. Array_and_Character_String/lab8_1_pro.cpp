#include	<stdio.h>
void	sumit(void);
int main(void)
{
	int count;
	printf("Please enter 5 numbers to be summed\n");
	for	(count=0;	count<5;	count++)
		sumit();
	return	0;
}
void	sumit(void)
{
	static int sum;
	int num;

	printf("Enter a number:	");
	scanf("%d",&num);
	sum	+=	num;
	printf("The	current	total	is	%d\n",	sum);
}