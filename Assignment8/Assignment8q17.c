#include<stdio.h>
int main()
{
	int n,sum=0,n1,n2,i;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("Enter numbers : ");
	scanf("%d%d",&n1,&n2);
	sum+=n2*n1;
	for(i=0;i<n-2;i++)
	{
		scanf("%d",&n1);
		sum+=n2*n1;
		n2=n1;
	}
	printf("Sum of two consecutive numbers is : %d",sum);
	return 0;
}