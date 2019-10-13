#include<stdio.h>
#include<math.h>

int main(){
	long long int n,ans,l,r,i,j,x;
	scanf("%lld",&n);
	int a[1000]={0},b[1000]={0};
	while(n--){

		scanf("%lld %lld",&l,&r);
		x=r;
		i=0;
		while(l>0)
		{
			a[i]=l%2;
			l=l/2;
			i++;
		}
		j=0;
		while(r>0)
		{

			b[j]=r%2;
			r=r/2;
			j++;
		}
		ans=0;
		for(int k=0;k<j;k++)
		{
			a[i]=1;
			ans+=(int)pow(2,k)*1;
		}
		if(ans<r&&ans>l)
			printf("%lld",ans);
		else
		{
			i=1;
			while(ans>r)
			{
				ans=ans>>i;
				ans=ans<<i;
			}
			printf("%lld",ans);
			
		}

			
	}




	return 0;
}
