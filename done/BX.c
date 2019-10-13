#include<stdio.h>
#include<math.h>

int main(void){
  long long int n,m=0,a=0,o=0,j=0,k=0;
  int x,y;
  scanf("%lld %d %d",&n,&x,&y);
  if(n==0)
    printf("0");
  while(n>0){
    k=n%10;
    o=o+k*pow(x,j);
    j++;
    n=n/10;
  }
  j=0;
  while(o>0){
    a=o%y;
    m=m+a*pow(10,j);
    j++;
    o=o/y;
  }
    printf("%lld",m);
    return 0;
}
