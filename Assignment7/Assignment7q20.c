#include<stdio.h>
void main()
{
    int n,m,num,s=0;
    printf("enter number of groups & number of numbers in each group\n");
    scanf("%d %d",&n,&m);
    printf("enter numbers in each group:\n");
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
            {
                scanf("%d,",&num);
                s+=num;
            }
     }

    printf("your sum of groups is:%d",s);
}



