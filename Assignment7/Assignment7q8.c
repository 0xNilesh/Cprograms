#include<stdio.h>
int main()
{
    float a1,b1,a2,b2;
    printf("Enter two complex numbers\n");
    scanf("%f%fi,%f%fi",&a1,&b1,&a2,&b2);
    if(b1+b2>0)
    printf("Sum of complex numbers is = %f+%fi",(a1+a2),(b1+b2));
    else
    printf("Sum of complex numbers is = %f%fi",(a1+a2),(b1+b2));
return 0;
}
