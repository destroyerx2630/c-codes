#include<stdio.h>

int main(){
	long long t,n,s,k;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		s=0;
		scanf("%lld",&n);
		if(n<6)
		{
			printf("1\n");
			continue;
		}

		for(long long int j=1;j<n;j++)
		{
			s+=2*j*j-2*j+1;
			if(n==s)
			{
				k=j;
				break;
			}
			else if(n<s)
			{
				k=j-1;
				break;
			}
		}
		printf("%lld\n",k);
	}

	return 0;
}
