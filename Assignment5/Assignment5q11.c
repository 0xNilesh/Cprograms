#include<stdio.h>
int main()
{
	int k=2;
	for(int i=1;i<=10;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(i%2!=0)
			{
				if(j<k-2)
					printf("*");
				else if(j<k)
					printf("O");
				else
				{
					if(j%2==0)
						printf("*");
					else
						printf("O");
				}
			}
			else
			{
				if(j<k)
					printf("O");
				else
				{
					if(j%2==0)
						printf("*");
					else
						printf("O");				
				}
			}
		}
		if(i>=2 && i%2==0)
			k+=2;
		printf("\n");
	}
}