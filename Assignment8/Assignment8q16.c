#include<stdio.h>
int main()
{
	int n,num,s=0,w=0;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("\nEnter numbers : ");	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{	
			w++;
			s+=num*w;
		}
	}
	printf("\nWeighted sum of even numbers is : %d",s);
	return 0;
}
