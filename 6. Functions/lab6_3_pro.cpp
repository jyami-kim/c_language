#include <stdio.h>

int IsSameRealNumbers(float a, float b){

	if((int)(a*100)==(int)(b*100))
		return 1;
	else
		return 0;

}

int main(void){
	float num1,num2;
	
	printf("Enter tow floating-point numbers:");
	scanf("%f %f",&num1,&num2);

	if(IsSameRealNumbers(num1,num2)==1)
		printf("%f and %f are the same up to fractional digits\n",num1, num2);
	else
		return 0;
}