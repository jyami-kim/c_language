#include <stdio.h>
#include <string.h>

float arravg(int *arr,int size){
	int total =0;
	for (int i=0;i<size;i++){
		total +=arr[i];
	}
	printf("%f\n",(float)(total/size));
	return 0;
}

int main(void){
	int A[5]={1,2,3,4,5};
	printf("A={%d,%d,%d,%d,%d}\n",A[0],A[1],A[2],A[3],A[4]);
	printf("The average of A is ");
	arravg(A,5);
	int B[7]={6,7,8,9,10,11,12};
	printf("B={%d,%d,%d,%d,%d,%d,%d}\n",B[0],B[1],B[2],B[3],B[4],B[5],B[6]);
	printf("The average of B is ");
	arravg(B,7);

	return 0;
}