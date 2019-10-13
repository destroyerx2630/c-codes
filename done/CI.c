#include<stdio.h>
#include<math.h>
int main(void){
	long long int t,n,l;
	scanf("%lld",&t);
	for (long long int i = 0; i < t; i++)
	{
		scanf("%lld",&n);
		l=0;
		if(n==1)
			printf("1\n");
		else{
			printf("%d\n",(int)pow(n,0.5));
		}
	}
	return 0;
}
