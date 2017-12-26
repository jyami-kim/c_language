#include <stdio.h>

int sumofn(int n){
	if(n==1)
		return 1;
	else
		return n+sumofn(n-1);
}

int main(void){
	int num;
	printf("n=?");
	scanf("%d",&num);

	printf("%d\n",sumofn(num));
	return 0;
}