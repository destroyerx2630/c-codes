#include<stdio.h>

int main(void){

  long long int n;
  scanf("%lld",&n);
  if(n<=2){
    printf("%lld",n);
  }
  else
    printf("%lld",2*n-2);
}
