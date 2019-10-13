#include<stdio.h>
#include<math.h>
double dmod(double x, double y)
{
    return x - (int)(x / y) * y;
}

int main(void){
    long long int t,n;
    long double a[1000002];
    long double b=(int)pow(10,9)+7;
    a[0]=0;
    a[1]=1.0;
    a[2]=1.0;
    for(int i=3;i<1000000;i++){
        a[i]=dmod(dmod(a[i-1],b)+dmod(a[i-2],b),b);
    }
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        printf("%Lf\n",a[n]);
    }

    return 0;
}
