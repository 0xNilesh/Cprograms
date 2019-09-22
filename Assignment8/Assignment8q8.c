#include<stdio.h>
int main()
{
	int n,num,s=0;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("\nEnter numbers : ");	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num);
		s+=num*i;
	}
	printf("\nWeighted sum of numbers is : %d",s);
	return 0;
}
