#include <stdio.h>
#include <stdlib.h>
void doubleInput(double *x){
	printf("Entrez une valeur reelle : ");
	scanf("%lf", x);
}

void intInput(int *x){
	printf("Entrez une valeur entiere : ");
	scanf("%d", x);
}

double toPow(double x, int n){
	double r = 1;
	for(int i = 0; i < n; i++){
		r = r*x;
	}
	return r;
}
int main(int argc, char *argv[]){
	double x; int n;
	doubleInput(&x);
	intInput(&n);
	printf("%lf", toPow(x, n));
}
