#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,d,r1,r2;
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("%.3lf %.3lf",r1,r2);
	}
}
