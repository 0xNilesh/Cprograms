#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,y,z;
	printf("Enter numbers a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	y=(b*b+c*c-a*a)/(2*b*c);
	z=acos(y);
	printf("the angle A in radian %f",z);
	z=z*180/3.14;
	printf("the angle A in degree %f",z);
return 0;
}