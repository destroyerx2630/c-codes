#include<stdio.h>

int min(long long int a, long long int b)
{
	if(a<=b)
		return a;
	else
		return b;
}



int max(long long int a, long long int b)
{
	if(a>=b)
		return a;
	else
		return b;
}


int minmaxcomp(long long int a, long long int b, long long int c, long long int d, long long int e, long long int f)
{
	if((e<=max(a,c)) && (e>=min(a,c)) && (f<=max(b,d)) && (f>=min(b,d)))
		return 1;
	else
		return 0;
}

int main()
{
	int t;
	if(scanf("%d", &t))
	{
		long long int x1,y1,x2,y2,x3,y3,x4,y4,v1,v2,v3,v4;

		int res;

		for(int i=0; i<t; i++)
		{
			if(scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4));
			{
			v1 = (y2-y1)*(x3-x2) - (x2-x1)*(y3-y2);
			v2 = (y2-y1)*(x4-x2) - (x2-x1)*(y4-y2);
			v3 = (y4-y3)*(x2-x4) - (x4-x3)*(y2-y4);
			v4 = (y4-y3)*(x1-x4) - (x4-x3)*(y1-y4);
		}
		{
				if(v1==0)
				v1=0;
			else if(v1>0)
				v1 = 1;
			else
				v1 = 2;

			if(v2==0)
				v2=0;
			else if(v2>0)
				v2 = 1;
			else
				v2 = 2;

			if(v3==0)
				v3=0;
			else if(v3>0)
				v3 = 1;
			else
				v3 = 2;

			if(v4==0)
				v4=0;
			else if(v4>0)
				v4 = 1;
			else
				v4 = 2;
			}
			if(((v1!=v2) && (v3!=v4)) || ((v1==0) && minmaxcomp(x1,y1,x2,y2,x3,y3)) || ((v2==0) && minmaxcomp(x1,y1,x2,y2,x4,y4)) || ((v3==0) && minmaxcomp(x3,y3,x4,y4,x1,y1)) || ((v4==0) && minmaxcomp(x3,y3,x4,y4,x2,y2)))
				printf("Yes\n");
			else
				printf("No\n");

		}


	}

	return 0;
}
