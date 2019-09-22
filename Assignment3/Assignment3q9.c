#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,x;
	printf("Enter a,b,c,d,x : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	if(x==a)
		printf("x is equal to a");
	else if(x==b)
		printf("x is equal to b");
	else if(x==c)
		printf("x is equal to c");
	else
		printf("x is equal to d");
	return;
}