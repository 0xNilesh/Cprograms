#include<stdio.h>
int main()
{
	int n,num,sum=0,flag=0;
	printf("Enter how many numbers you want to enter ");
	scanf("%d",&n);
	printf("\nNow Enter the numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
			flag=1;
		if(flag==1)
			sum+=num;
	}
	printf("\nSum of first even number onwards = %d",sum);
}	