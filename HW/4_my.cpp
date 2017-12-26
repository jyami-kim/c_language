#include <stdio.h>
#define MAX_SIZE 1000
typedef struct {
	float coef;
	int exp;
} polyType;

polyType poly[MAX_SIZE];

int avail = 0;

int compare(int a, int b);
void attach(float coef, int exp);
void padd(int sp, int fp, int sq, int fq, int *sr, int *fr);

int main (void)
{
	int sp, fp, sq, fq, sr, fr;

	sp = avail;
	attach(3, 1000);
	attach(4, 1);
	attach(-1, 0);
	fp = avail - 1;
	sq = avail;
	attach(1, 3);
	attach(20, 2);
	attach(-5, 1);
	attach(10, 0);
	fq = avail - 1;
	padd(sp, fp, sq, fq, &sr, &fr);

	printf("R(x) = P(x) + q(x) is? \n");
	for (int i = sr;i <= fr;i++) {
		if (poly[i].coef > 0)
			printf(" + ");
		else 
			printf(" ");
		printf("%.1fX^%d ", poly[i].coef, poly[i].exp);
	}
	printf("\n");

	return 0;

}
int compare(int a, int b) {
	if (a > b) return 1;
	else if (b > a) return -1;
	return 0;
}

void attach(float coef, int exp) {
	poly[avail].coef = coef;
	poly[avail].exp = exp;
	avail++;
}

void padd(int sp, int fp, int sq, int fq, int *sr, int *fr) {
	float tempcoef;
	*sr = avail;
	while (sp <= fp && sq <= fq)
		switch (compare(poly[sp].exp, poly[sq].exp)) {
		case -1:	//p exponent < q exponent
			attach(poly[sq].coef, poly[sq].exp);
			sq++;
			break;
		case 0:		//p exponent = q exponent
			tempcoef = poly[sp].coef + poly[sq].coef;
			if (tempcoef)
				attach(tempcoef, poly[sp].exp);
			sp++;  sq++;
			break;
		case 1:		//p expoent > q exponent
			attach(poly[sp].coef, poly[sp].exp);
			sp++;
			break;
		}

	for (;sp <= fp;sp++)
		attach(poly[sp].coef, poly[sp].exp);
	for (;sq <= fq;sq++)
		attach(poly[sq].coef, poly[sq].exp);
	*fr = avail - 1;
}