#include<stdio.h>

int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=0;j<20;j++)
		{
			if((i%2==0 && j%5!=0) || (i%2!=0 && j%5==0))
				printf("O");
			else
				printf("*");
		}
		printf("\n");
	}
}