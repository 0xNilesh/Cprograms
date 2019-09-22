#include<stdio.h>
int main()
{
	int n,num,s=0;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("\nEnter numbers : ");	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		num=num/10;
		s+=num%10;
	}
	printf("\nSum of second last digits of numbers is : %d",s);
	return 0;
}