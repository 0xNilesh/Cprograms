#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	printf("Enter the values of a b c in the equation ax+by+c=0 : ");
	scanf("%d%d%d",&a,&b,&c);
	s=-a/b;
	printf("\nSlope is %f",s);
return 0;
}	