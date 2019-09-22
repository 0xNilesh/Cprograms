#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three numbers a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		printf("\na is biggest");
	else if(b>a && b>c)
		printf("\nb is biggest");
	else
		printf("\nc is biggest");			
}