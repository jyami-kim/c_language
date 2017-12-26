#include <stdio.h>

float arravg(int *arr, int size);

int main(void)
{
	int i;
	int A[5]={1,2,3,4,5};
	int B[7]={6,7,8,9,10,11,12};

	printf("A={");	
	for (i=0;i<4;i++) 
		printf("%d,",A[i]);
	printf("%d}\n",A[i]);
	printf("The average of A is %f\n", arravg(A,5));
	
	printf("B={");	
	for (i=0;i<6;i++) 
		printf("%d,",B[i]);
	printf("%d}\n",B[i]);
	printf("The average of B is %f\n", arravg(B,7));
	
	return 0;
}

float arravg(int *arr, int size)
{
	int i;
	int sum=0;
	for (i=0;i<size;i++)
		sum+=arr[i];
	return (float)sum/size;
}
