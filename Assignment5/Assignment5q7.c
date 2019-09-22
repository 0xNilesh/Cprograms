#include<stdio.h>

int main()
{
    int k=6,i,j;
    for(i=0;i<17;i++)
        printf("O");
    printf("\n");
    for(i=1;i<=7;i++)
    {
        if(k==5)
        {
            k--;
            continue;
        }
        for(j=1;j<=17;j++)
        {
            if(j>k && j<=(17-k))
                printf("*");
            else
                printf("O");
        }
        printf("\n");
        if(k!=2)
            k--;
    }
    k=3;
    for(i=1;i<=4;i++)
    {
        if(k==5)
        {
            k++;
            continue;
        }
        for(j=1;j<=17;j++)
        {
            if(j>k && j<=(17-k))
                printf("*");
            else
                printf("O");
        }
        k+=1;
        printf("\n");
    }
    for(i=0;i<17;i++)
        printf("O");
    return 0;
}