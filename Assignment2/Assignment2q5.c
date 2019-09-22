#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	float distance;
	printf("Enter the coordinates of the point : ");
	scanf("%d%d",&a,&b);
	printf("Enter the values of c d e of equation cx+dy+e=0 : ");
	scanf("%d%d%d",&c,&d,&e);
	distance=(c*a+b*d+e)/sqrt(c*c+d*d);
	printf("%f",distance);
return 0;
}