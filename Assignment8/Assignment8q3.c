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
		s+=num/10;
	}
	printf("\nSum of numbers after deleting last digits is : %d",s);
	return 0;
}