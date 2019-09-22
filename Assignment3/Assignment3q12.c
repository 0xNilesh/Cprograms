#include<stdio.h>
#include<math.h>
int main()
{
	float p,q,r,a,b,c,dist,q,area;
	printf("Enter the value of p,q,r,a,b,c,as given in question : ");
	scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
	dist=((a*p+b*q+c)/(sqrt(a*a+b*b)));
	if(dist>r)
		printf("No intersection");
	else
	{
		q=sqrt((r*r)-(d*d));
		area=q*dist;	
		printf("\nArea of triangle is : %f",area);
	}
}