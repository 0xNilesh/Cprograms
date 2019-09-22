#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("\nNumber after exchanging last two digits : %d",(num/100)*100 + (num%10)*10 + (num/10)%10);
}