#include<stdio.h>

int main()
{
	int i=1,j,a=0,num,s=0,n,sum=0,z=0;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	j=a+i;
	printf("\nEnter the numbers : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		s++;
		if(s==j)
		{
			z++;
			sum+=num;
			j=a+z;
			a=j-1;
			j=a+z+1;
		}
		else
			continue;
	}
	printf("\nSum of 1st,2nd,4th,7th,11th,.... numbers are : %d",sum);
	return 0;
}
