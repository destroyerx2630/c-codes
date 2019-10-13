#include<stdio.h>
#include<math.h>

int main (void){
	long long int t,x,y,a[10000];
	long long int k=0;
	scanf("%lld",&t);
	int flag=0;
	for (long long int i=2;i<10000;i++)
	{
		flag=0;
		for (int j = 2; j <= sqrt(i) / 2; j++) { 
			if (i % j == 0)  
			{
				flag=1;
				break;
			}
		} 
		if(flag==0){
			a[k]=i;
			k++;
		}
	}
	while(t--)
	{
		flag=0;
		scanf("%lld %lld",&x,&y);
		for (int i=0;i<sqrt(x)/2;i++)
		{
			if((x-y)%a[i]==0)
				flag=1;
		}
		if(flag==1)
			printf("YES\n");
else
			printf("NO\n");

	}
	return 0;
}
