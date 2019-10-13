#include<stdio.h>

#define mod 1000000007;
long long int a, b, c, d;

void fib(long long int n, long long int ans[])
{
    if (n == 0)
    {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    fib((n / 2), ans);
    a = ans[0]; 
    b = ans[1]; 
    c = 2 * b - a;
    if (c < 0)
        c += mod;
    c = (a * c) % mod;         
    d = (a * a + b * b) % mod; 
    if (n % 2 == 0)
    {
        ans[0] = c;
        ans[1] = d;
    }
    else
    {
        ans[0] = d;
        ans[1] = c + d;
    }
}

int main()
{
    long long int n,t;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){ 
        scanf("%lld", &n);
        long long int ans[2] = {0};
        fib(n, ans);
        printf("%lld\n", ans[0]);
    }
    return 0;
}