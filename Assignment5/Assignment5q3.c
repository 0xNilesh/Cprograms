#include<stdio.h>

int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=0;j<10;j++)
		{
			if((i+j)%2!=0)
				printf("O");
			else
				printf("*");
		}
		printf("\n");
	}
}