#include<stdio.h>
int main()
{
	int n,num,sum=0,flag=0,z;
	printf("Enter how many numbers you want to enter ");
	scanf("%d",&n);
	printf("\nNow Enter the numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num%2==0 && flag==0)
		{
			z=num;
			flag=1;
		}		
		if(flag==1)
			sum+=num;
	}
	printf("\nSum of all numbers after first even number = %d",sum-z);
}	