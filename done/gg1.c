#include<stdio.h>
#include<math.h>

int main(){
	long long int n,ans,l,r,i,j,x;
	scanf("%lld",&n);
	long long int a[60];
	for(int i=0;i<=30;i++)
	{
		a[i]=(int)pow(2,i)-1;
	
	}
	while(n--){

		scanf("%lld %lld",&l,&r);
		if(r==0)
		{
			printf("0");
			break;
		}
		for(int i=30;i>=0;i--){
			if(a[i]<r)
			{	
				printf("%lld\n",a[i]-1);

				break;
			}
			else if(a[i]==l && a[i+1]==r)
			{
				r=r-l;
				for(int j=30;j>=0;j--)
				{
					if(a[j]<r)
					{
						printf("%lld\n",a[j]+l);
						break;
					}
					
				}

				
			}

		}

	}
	return 0;
}
