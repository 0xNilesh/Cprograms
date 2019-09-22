#include<stdio.h>
void main()
{
	int a,b,c,d;
	float dist;
	printf("Enter first coordinate : ");
	scanf("%d%d",&a,&b);
	printf("\nEnter second coordinate : ");
	scanf("%d%d",&c,&d);
	dist=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	printf("\nDistance between the points is : %f",dist);
}
