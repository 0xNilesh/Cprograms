#include<stdio.h>
#include<math.h>
void root(int a,int b, int c)
{
	int D,q;
	D=((b*b) - 4*a*c);
	if(D>0)
	{	
		q=sqrt(D);
		printf("\nRoots are : %d and %d",((-b) + q)/(2*a),((-b) - q)/(2*a));
	}
	else if(D==0)
		printf("\nRoots are : %d",(-b)/(2*a));
	else
	{
		D=-D;
		q=sqrt(D)/(2*a);
		printf("\nRoots are : %d,%d and %d",(-b)/(2*a),q,-q);
	}
	return;
}
void main()
{
	int a,b,c,r1,r2;
	printf("Enter a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	root(a,b,c);
	return ;
}