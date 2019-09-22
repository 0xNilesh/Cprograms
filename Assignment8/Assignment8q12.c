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
		if(num>30 && num<90)
			s+=num;
	}
	printf("\nSum of all numbers whose last digit is multiple of 3 is : %d",s);
	return 0;
}
