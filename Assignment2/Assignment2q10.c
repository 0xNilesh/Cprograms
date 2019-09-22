#include<stdio.h>
#include<math.h>
int main()
{
	float h,k,r,s,d,cl;
	printf("Enter the coordinates of centre and radius of circle\n");
	scanf("%f%f%f",&h,&k,&r);
	printf("Enter the value of s in line x=s\n");
	scanf("%f",&s);
	d=fabs(h-s);
	if(d<r)
	{
		cl=2*sqrt(r*r-d*d);
		printf("The chord length is %f",cl);
	}
	else
		printf("Line is not intersecting");
return 0;
}