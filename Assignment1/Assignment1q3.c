#include<stdio.h>

int main()
{
	int a,b,c,p;
	printf("Enter a,b,c & p : ");
	scanf("%d %d %d %d", &a, &b, &c, &p);
	printf("\nF(p) = %d",a*(p*p) + b*p + c);
	return 0;
}