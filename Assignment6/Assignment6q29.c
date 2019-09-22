#include<stdio.h>

int main()
{
	int a,b,i,j,c,n1,n2;
	printf("Enter two numbers for pattern\n");
	scanf("%d %d",&n1,&n2);
	for(i=0;i<6;i++)
	{
		a=n1;b=n2;
		printf("(%d)(%d)",a,b);
		for(j=0;j<i;j++)
		{
			c=a+b;
			printf("(%d)",c);
			a=b;
			b=c;
		}
		printf("\n");
	}
	return 0;
}