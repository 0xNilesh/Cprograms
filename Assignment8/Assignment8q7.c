#include<stdio.h>
int main()
{
	int n,num,s=1;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("\nEnter numbers : ");	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
			s=num;
	}
	if(s==1)
		printf("\nAll are odd numbers ");
	else
		printf("\nLast even number is : %d",s);
	return 0;
}
