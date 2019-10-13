#include<stdio.h>
#include<string.h>


int main(){
	long long int t,n,j,i;
	char str[100005],c[10];
	scanf("%d",&t);
	long long int index[100005];
	long long int count;
	long long int min,temp;
	while(t--){
		count=0;
		j=0;
		int len;
		scanf("%s %s %d",str ,c, &n);
		len =strlen(str);
		if(n==1){

			for(long long int i=0;i<len;i++){
			
				if(str[i]==c[0])
					count++;

			}
			printf("1 %d\n",count);
			continue;

		}
		else{
			for(long long int i=0;i<len;i++)
			{

				if(str[i]==c[0])
				{
					index[j]=i;
					j++;
				}
			}
			min= index[j-1]-index[0];
			for(long long int i=0;i<(j-n+1);i++)
			{
				temp=index[i+n-1]-index[i];
				if(temp<min)
					min=temp;
			}
			for(long long int i=0;i<(j-n+1);i++)
			{
				temp=index[i+n-1]-index[i];
				if(temp==min)
					count++;
			}
			printf("%d %d\n",min+1,count);

		}


	}
	return 0;
}
