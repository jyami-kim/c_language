#include <stdio.h>
int main(void)
{
	int a[100];
	int d, i, j, k, l; 
	printf("Enter integers(-1 to stop)\n");
	for (i=0;i<100;i++){
		scanf("%d", &d);
		if (d==-1)
			break;
		a[i]=d;
	}
	for (j=0; j<i; j++){
		for (k=j; k<i; k++){
			if (a[j]>a[k]){
				d=a[j];
				a[j]=a[k];
				a[k]=d;}
		}
	}
	printf("sorted list:");
	for (l=0;l<i;l++)
		printf("%d ", arr[l]);
	printf("\n");
	return 0;
}