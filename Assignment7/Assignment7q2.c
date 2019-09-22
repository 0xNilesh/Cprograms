#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("Enter a,b,c,d,e,f \n");
	scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
	printf("%21d %21d \n",a,b);
	printf("%10d %10d %10d %10d",c,d,e,f);
	return 0;
}