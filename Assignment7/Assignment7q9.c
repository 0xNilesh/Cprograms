#include<stdio.h>
void main()
{
    float a1,b1,a2,b2,a3,b3,a4,b4;
    printf("Enter two complex numbers\n");
    scanf("%f%fi,%f%fi",&a1,&b1,&a2,&b2);
    a3=(a1*a2-b1*b2);
    b3=(a1*b2+b1*a2);
    if(b3>0)
        printf("Multiplication Result:%f+%fi",a3,b3);
    else
        printf("Multiplication Result:%f%fi",a3,b3);

    printf("\n");
    a4=(a1*a2+b1*b2)/(a2*a2+b2*b2);
    b4=(b1*a2-a1*b2)/(a2*a2+b2*b2);
    if(b3>0)
        printf("Divison Result :%f+%fi",a4,b4);
    else
        printf("Divison Result  :%f%fi",a4,b4);
}
