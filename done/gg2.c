#include<stdio.h>
#include<math.h>

int main(){
	long long int n,l,r,z,x=0;
	scanf("%lld",&n);
	while(n--){
		x=0;
		scanf("%lld %lld",&l,&r);
		for(int i=l;i<r;i++)
		{
			x=l|(l+1);
			if(x<=r)
				l=x;
			else
				break;

		}	
		printf("%lld\n",l);
	}




	return 0;
}
