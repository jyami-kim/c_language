#include <stdio.h>

float arravg(int *arr, int size);

int main(void){
	int A[5] = { 1,2,3,4,5 };
	int B[7] = { 6,7,8,9,10,11,12 };
	printf("The average of A is %f\n", arravg(A, 5));
	printf("The average of B is %f\n", arravg(B, 7));
}

float arravg(int *arr, int size) {
	int sum = 0;
	for (int i = 0;i < size;i++)
		sum += arr[i];
	return (sum / size);
}
