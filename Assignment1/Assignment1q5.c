#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("\nNumber after deleting last two digits : %d",num/100);
}