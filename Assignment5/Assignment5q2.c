#include<stdio.h>

int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i<3 && j<8 || i>6 && j>14)
				printf("O");
			else
				printf("*");
		}
		printf("\n");
	}
}