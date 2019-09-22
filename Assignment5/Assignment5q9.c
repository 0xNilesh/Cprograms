#include<stdio.h>

int main()
{
	int k=5,a=3;
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i>3)
			{
				if(j<k)
					printf("*");
				else if(j<a+i)
					printf("O");
				else
					printf("*");
			}
			else
				printf("*");
		}
		if(i>3)
			k--;
		printf("\n");
	}
}