#include<stdio.h>
void main()
{
    int n,n1,n2,sum=0;
    printf("Enter number of pairs:\n");
    scanf("%d",&n);
    printf("Enter pairs\n");
    for(int i=0;i<n;i++)
    {
        scanf("(%d,%d);",&n1,&n2);
        sum=sum+(n1*n2);
    }
    printf("sum is:%d",sum);
}
