#include<stdio.h>
int main()
{
    float a1,b1,c1,a2,b2,c2;
    printf("Enter two vectors\n");
    scanf("%fi%fj%fk,%fi%fj%fk",&a1,&b1,&c1,&a2,&b2,&c2);
    printf("Dot product is=%f",((a1*a2)+(b1*b2)+(c1*c2)));
return 0;
}
