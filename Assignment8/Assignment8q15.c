#include<stdio.h>
int main()
{
	int n,num;
	float s=0,w=0;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("\nEnter numbers : ");	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{	
			s+=num*i;
			w+=i;
		}
	}
	printf("\nAverage weighted sum of even numbers is : %0.2f",s/w);
	return 0;
}
