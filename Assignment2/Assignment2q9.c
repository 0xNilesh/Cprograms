#include<stdio.h>
#include<math.h>
int  main()
{
	int a,b,c,d,e,f,g,h;
	float x,y,z,dist,r,r2,area;
	printf("Enter the value of a,b,c,d,e,f,g,h as specified in question: ");
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	x=-(e/2);
	y=-(f/2);
	z=-(g/2);
	dist=(a*x+b*y+c*z+d)/sqrt(a*a+b*b+c*c);
	r=sqrt(x*x+y*y+z*z-h);
	r2=sqrt(r*r-dist*dist);
	area=3.14*r2*r2;
	printf("\nThe area of circle is %.2f",area);
	return 0;
}