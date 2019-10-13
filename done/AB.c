#include<stdio.h>

int main(void){
  //t-l1/u1-l1=x-l2/u2-l2
  long long int l1,u1,l2,u2,t;
  scanf("%lld %lld %lld %lld %lld", &l1,&u1,&l2,&u2,&t);
  double s=(float)(t-l1)*(u2-l2)/(u1-l1);
  printf("%0.2f",s+l2);
}
