#include<stdio.h>

int main()
{
	int k=6;
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i<=8)
			{
				if(j<k)
					printf("O");
				else if(j<11)
					printf("*");
				else
					printf("O");
			}
			else
				printf("*");
		}
		k--;
		printf("\n");
	}
}