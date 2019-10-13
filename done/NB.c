#include<stdio.h>
#include<math.h>

int main(void)
{
  long long int n,x,y,z,k=2,l=0;
  scanf("%lld %lld %lld",&x,&y,&z);
  for(int i=x;i<=y;i++){
    k=2;
    n=(int)pow(i,0.5);
    for(int j=2;j<=n;j++){
      if(i%j==0){
        if(i/j>n)
          k+=2;
        else
          k++;
      }
    }
    if(k<=z)
      l++;
  }
  printf("%lld",l);
  return 0;
}
