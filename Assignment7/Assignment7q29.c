#include<stdio.h>
int power(int num1,int num2)
{
	int s=1;
	for(int i=1;i<=num2;i++)
		s*=num1;
	return s;
}
int main()
{
	int n,sum=0;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("\nNow Enter numbers : ");
	for(int i=0;i<n;i++)
	{
		int num1,num2;
		scanf("%d %d",&num1,&num2);
		sum+=power(num1,num2);
	}
	printf("\nRequired Sum = %d",sum);
}