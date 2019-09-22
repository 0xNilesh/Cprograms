#include<stdio.h>
int main()
{
		int a,b;
	printf("Enter a and b of complex no. a+bi\n");
	scanf("%d %d",&a,&b);
	if(b>0&&b!=1)
	{
		if(a==0)
			printf("%di",b);
		else
			printf("%d + %di",a,b);
	}
	if(b<0&&b!=-1)
	{
		if(a==0)
			printf("%di",b);
		else
			printf("%d %di",a,b);
	}
	if(b==0)
	{
		if(a==0)
			printf("0");
		else
			printf("%d",a);
	}
	if(b==1)
	{
		if(a==0)
			printf("i");
		else
			printf("%d+i",a);
	}
	if(b==-1)
	{
		if(a==0)
			printf("-i");
		else
			printf("%d-i",a);
	}


return 0;
}