#include<stdio.h>

int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i%2!=0)
				printf("*");
			else
			{
				if(i>5 && j>3 && j<14)
					printf("*");
				else
					printf("O");
			}				
		}
		printf("\n");
	}
}