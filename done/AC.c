#include<stdio.h>

int main (void){
  long long int m,y,mf;
  scanf("%lld %lld",&m,&y);
  mf=m +( m * y* 0.1);
  long long int i10,i50,i100,i2000;
  i2000= mf/2000;
  mf=mf%2000;
  i100=mf/100;
  mf=mf%100;
  i50=mf/50;
  mf=mf%50;
  i10=mf/10;
  mf=mf%10;
  printf("%lld %lld %lld %lld",i10,i50,i100,i2000);
  return 0;
}
