#include<stdio.h>

int main()
{
	float a,b,c,d;
	printf("Enter a,b,c,d \n");
	scanf("%f %f %f %f", &a,&b,&c,&d);
	printf("%10.3f %10.3f \n",a,b);
	printf("%10.5f %10.1f",c,d);
	return 0;
}