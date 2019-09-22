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
		if(((num/10)%10)>(num%10))
			s+=((num/100)*100) + ((num%10)*10) + ((num/10)%10);
		else
			s+=num;
	}
	printf("\nSum of numbers after putting last two digits in sorted order is : %d",s);
	return 0;
}
