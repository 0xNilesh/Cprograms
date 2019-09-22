#include<stdio.h>
int main()
{
	int n,num,sum=0,flag=0,k;
	printf("Enter how many numbers you want to enter ");
	scanf("%d",&n);
	printf("\nEnter value of k ");
	scanf("%d",&k);
	printf("\nNow Enter the numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(flag==k)
			flag+=1;
		if(num%2==0)
			flag++;		
		if(flag>k)
			sum+=num;
	}
	printf("\nSum of all numbers after k even numbers = %d",sum);
}	