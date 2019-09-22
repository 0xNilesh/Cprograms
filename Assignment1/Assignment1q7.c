#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("\nSum of last two digits : %d",(num%10)+ (num/10)%10);
}