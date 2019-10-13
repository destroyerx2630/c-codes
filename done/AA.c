#include<stdio.h>

int main(void){

	long long int a,b;
	scanf("%lld %lld",&a,&b);
	double c= (double)a/(double)b;
	printf("%lld %lld %lld %lld %lld %0.10f", a+b, a-b, a*b, a/b, a%b, c);
	return 0;
}
