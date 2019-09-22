#include<stdio.h>

int main()
{
	int k=6,a=5;
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i>2)
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
		if(i>2)
		{	
			k--;
			a++;
		}	
		printf("\n");
	}
}