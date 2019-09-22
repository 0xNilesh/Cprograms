#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("\nSecond last digit of number : %d",(num/10)%10);
}