#include<stdio.h>

int main()
{
	for(int i=1;i<=5;i++)
	{
			for(int j=1;j<=20;j++)
			{
				if(i%2!=0)
				{
					printf("*");
					continue;
				}
				else
				{
					if(j%2==0)
						printf("O");
					else
						printf("*");
				}	
		}
	printf("\n");
	}
}