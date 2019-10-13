#include<stdio.h>
#include<string.h>

int main(){
	long long int t,k,j,maxj;
	char s[1000000];
	scanf("%lld",&t);
	while(t--){

		scanf("%s",s);
		k=0;
		j=1;
		maxj=0;
		for (int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='('&&k==0)
				k++;
			if(s[i]=='('&&k==1)
			{	
				j++;
				if(j>maxj)
					maxj=j;
			}
			if(s[i]==')'&&j>1)
				j--;
			if(s[i]==')'&&j==1)
				k--;


		}
		printf("%lld\n",maxj-1);

	}



	return 0;
}
