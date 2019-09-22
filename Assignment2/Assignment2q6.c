#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x,y,r;
	printf("Enter a,b,c of the equation of circle : ");
	scanf("%f%f%f",&a,&b,&c);
	x=-(a/2);
	y=-(b/2);
	r=sqrt(x*x+y*y-c);
	printf("%f%f%f",x,y,r);
return 0;
}