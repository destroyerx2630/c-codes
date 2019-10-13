#include<stdio.h>

#define min(x,y) ((x<y)?x:y)
#define max(x,y) ((x>y)?x:y)


int comp(long long int a,long long int b,long long int c,long long int d,long long int e,long long int f)
{
	if(e<=max(a,c)&&e>=min(a,c)&&f<=max(b,d)&&f>=min(b,d))
		return 1;
	else
		return 0;
}

int main(void){
	long long int t,x1,x2,x3,x4,y1,y2,y3,y4,v1,v2,v3,v4;
	scanf("%lld",&t);
	int a;
	for(int i=1;i<=t;i++){
		scanf("%lld %lld %lld %lld %lld %lld %lld %lld" ,&x1 ,&x2 ,&x3 ,&x4 ,&y1 ,&y2 ,&y3 ,&y4);

		v1=(y2-y1)*(x3-x2)-(y3-y2)*(x2-x1);
		v2=(y2-y1)*(x4-x2)-(y4-y2)*(x2-x1);
		v3=(y4-y3)*(x2-x4)-(y2-y4)*(x4-x3);
		v4=(y4-y3)*(x1-x4)-(y1-y4)*(x4-x3);




		if(v1==0)
			v1=0;
		else if(v1<0)
			v1=2;
		else
			v1=1;

		if(v2==0)
			v2=0;
		else if(v2<0)
			v2=2;
		else
			v2=1;


		if(v3==0)
			v3=0;
		else if(v3<0)
			v3=2;
		else
			v3=1;


		if(v4==0)
			v4=0;
		else if(v4<0)
			v4=2;
		else
			v4=1;



		if(v1!=v2 && v3!=v4)
			a=1;
		else
			a=0;
		if(v1==0 && comp(x1,y2,x2,y2,x3,y3))
			a=1;
		else
			a=0;
		if(v2==0 && comp(x1,y1,x2,y2,x4,y4))
			a=1;
		else
			a=0;
		if(v3==0 && comp(x3,y3,x4,y4,x1,y1))
			a=1;
		else
			a=0;
		if(v4==0 && comp(x3,y3,x4,y4,x2,y2))
			a=1;
		else
			a=0;


		if(a==1)
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;
}
