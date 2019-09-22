#include<stdio.h>
int main()
{
	int n,num,sum=0,k=0;
	printf("Enter how many numbers you want to enter ");
	scanf("%d",&n);
	printf("\nNow Enter the numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(k==-1)
		{
			sum+=num;
			continue;
		}
		if(num%2==0)
		{
			if(k==i-1)
			{
				k=-1;
				continue;
			}
			else
				k=0;
			k=i;
		}
	}
	printf("\nSum of all numbers after two consecutive even numbers = %d",sum);
}	
