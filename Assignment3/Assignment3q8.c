#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("Enter two same numbers and one different : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b)
		printf("%d",c);
	else if(b==c)
		printf("%d",a);
	else
		printf("%d",b);
	return;
}