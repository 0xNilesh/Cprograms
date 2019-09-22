#include<stdio.h>
void main()
{
    int n,sum=0,j;
    printf("How many no. you want to enter\n");
    scanf("%d,",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d,",&j);
        sum=sum+j;
    }
    printf("sum is:%d",sum);
}
