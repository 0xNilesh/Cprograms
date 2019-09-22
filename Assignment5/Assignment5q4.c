#include<stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<30;j++)
		{
			if(i%2==0)
				printf("O");
			else 
				{
					if(j%3==0||j%5==0)
						printf("*");
					else 
						printf("O");
				}
		}
		printf("\n");
	}
return 0;
}