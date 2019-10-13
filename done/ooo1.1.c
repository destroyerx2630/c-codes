#include<stdio.h>

int main(){
	long long int f,s=0,t,n,a[100000];
	scanf("%lld",&t);
	while(t--){
		s=0;
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			s=s^a[i];		     //s=s xor a[i]
			f=(s&a[i]);		     //f=s.a[i]
			s=s&f;			     //s=s.f	
		}
		printf("%lld\n",s);
	}
	return 0;
}
