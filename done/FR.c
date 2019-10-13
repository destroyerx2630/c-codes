#include<stdio.h>
#include<math.h>

int main(void){
  long long int t;
  double c,x,y,y1,prc=0.000001;
  scanf("%lld",&t);
  for(int i=0;i<t;i++)
  {
    scanf("%lf",&c);
    x=c/(double)2.0;
    y=pow(x,2)+sqrt(x)-c;
    y1=2.0*x+(double)1.0/(2*sqrt(x));
    while(fabs(y)>prc)
    {
      x=x-y/y1;
      y=pow(x,2)+sqrt(x)-c;
      y1=2*x+1/(2*sqrt(x));
    }
    printf("%0.6lf\n",x);
  }
  return 0;
}
