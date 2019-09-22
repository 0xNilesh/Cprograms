#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,x,flag=0;
	printf("Enter a,b,c,d,x : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	if(x==a)
		flag++;
	if(x==b)
		flag++;		
	if(x==c)
		flag++;
	if(x==d)
		flag++;
	printf("%d",flag);
	return;
}