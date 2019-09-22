#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("\nNumber after deleting last digit : %d",(num/10)*10 + 2*(num%10));
}