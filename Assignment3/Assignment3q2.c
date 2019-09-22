#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter four numbers a,b,c,d : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
		printf("\na is biggest");
	else if(b>a && b>c && b>d)
		printf("\nb is biggest");
	else if(c>a && c>b && c>d)
		printf("\nc is biggest");
	else
		printf("\nd is biggest");			
}