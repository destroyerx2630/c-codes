#include<stdio.h>

int main(){
	long long int f,g,s=0,d=0,t,n,a[100000];
	scanf("%lld",&t);
	while(t--){
		s=0;
		d=0;
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			d=d|(a[i]&s);                //d=d+(a[i].s)
			s=s^a[i];		     //s=s xor a[i]
			f=(s&d);		     //f=s.d
			g=~f;			     //g=f'
			s=s&g;			     //s=s.g
			d=d&g;//d=d.g
			printf("%lld %lld %lld %lld\n", f,g,s,d);	



			/*4
			 *3 3 4 3
			 *i=0
			 *d=0+(3.0)=0
			 *s=0 xor 3=3
			 *f=0.3=0
			 *g=-1
			 *s=3.-1=3
			 *d=0.1=0
			 *
			 *i=1
			 *d=0+(3.3)=3
			 *s=3 xor 3=0
			 *f=0
			 *g=-1
			 *s=0
			 *d=3.-1=3
			 *
			 *i=2
			 *d=3+(4.0)=3
			 *s=0 xor 4=4
			 *f=0
			 *g=-1
			 *s=4
			 *d=3
			 *
			 *i=3
			 *d=3+(3.4)=3
			 *s=4 xor 3=7
			 *f=3
			 *g=-4
			 *s=7.-4=4
			 *d=3.-4=0
			 *
			 *
			 * s gives value
			 */

		}
		printf("%lld\n",s);
	}
	return 0;
}
