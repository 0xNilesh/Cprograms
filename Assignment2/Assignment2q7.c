#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,q,r;
	float x,y;
	printf("Enter values of a,b,c,p,q,r of the specified equations : ");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
	float x=(b*r-c*q)/(a*q-b*p);
	float y=(a*r-p*c)/(a*q-b*p);
	printf("%f%f",x,y);
return 0;
}