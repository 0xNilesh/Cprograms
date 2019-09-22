#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter sides of triangle a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a*a == b*b + c*c)
		printf("Angle a is 90 degree");
	else
		printf("Angle a is not 90 degree");	
}