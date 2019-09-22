#include<stdio.h>
#include<math.h>
int main()
{
    float a1,b1,c1,d;
    printf("Enter vector:\n");
    scanf("%fi%fj%fk",&a1,&b1,&c1);
    d=sqrt( (a1*a1) + (b1*b1) + (c1*c1) );
    printf("Unit vector is : %fi %fj %fk",(a1/d),(b1/d),(c1/d));
return 0;
}

