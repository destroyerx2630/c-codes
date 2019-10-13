#include<stdio.h>

int main(void){
	long long int n,k=0;
	scanf("%lld",&n);
	long long int a[n];
  int j;
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++){
    k=k+(a[i]/3);
    a[i]=a[i]%3;
		if(a[i]>0){
		    j=i+1;
		    while(a[i]>0 && j<n){
          if(a[j]>=2){
            k++;
		        a[i]-=1;
  	        a[j]-=2;
          }
          if(a[j]<=1)
            j++;
	      }
	}
}

	printf("%lld",k);
}
