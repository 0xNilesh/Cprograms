#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter a,b,c,d \n");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	printf("%10d %10d \n",a,b);
	printf("%10d %10d",c,d);
	return 0;
}