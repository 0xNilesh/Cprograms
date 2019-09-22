#include<stdio.h>

int main()
{
	float a,b,c,s;
	printf("Enter a,b,c for line ax+by+c=0 : ");
	scanf("%d%d%d",&a,&b,&c);
	s=(-a)/b;
	if(b==0)
		printf("\nLine is vertical");
	else
	{
		printf("Slope of line is : %f",s);
		printf("\nLine is not vertical");
	}	
}













