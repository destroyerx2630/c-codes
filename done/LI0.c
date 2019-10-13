#include<stdio.h>

#define min(x,y) ((x<y)?x:y)
#define max(x,y) ((x>y)?x:y)

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




			if(v1>0)
				v1=1;
			else if(v1<0)
				v1=2;

			if(v2>0)
				v2=1;
			else if(v2<0)
				v2=2;


			if(v3>0)
				v3=1;
			else if(v3<0)
				v3=2;

			if(v4>0)
				v4=1;
			else if(v4<0)
				v4=2;



			if((v1!=v2 && v3!=v4) || (v1==0 && x3<=max(x1,x2) && x3>=min(x1,x2) && y3<=max(y1,y2) && y3>=min(y1,y2)) || (v2==0 && x4<=max(x1,x2) && x4>=min(x1,x2) && y4<=max(y1,y2) && y4>= min(y1,y2)) || (v3==0 && x1<=max(x3,x4) && x1>=min(x3,x4) && y1<=max(y3,y4) && y1>=min(y3,y4))||(v4==0 && x2<=max(x3,x4) && x2>=min(x3,x4) && y2<=max(y3,y4) && y2>=min(y3,y4)))
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
