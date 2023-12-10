#include<stdio.h>
int main()
{
	float a,b,c,d,e,z,g,r,h,u;
	
	printf("enter side of square");
	scanf("%f",&a);
	
	b=4*a; // b is  perimeter of square 
	c=a*a; // c is  area of square
	
	printf("perimeter of square is %f",b);
	printf("area of square is %f",c);
	
	printf("enter 1st side of rectangle");
	scanf("%f",&d);
	
	printf("enter 2nd side of rectangle");
	scanf("%f",&e);
	
	z=2*(d+e); // z is  perimeter of rectangle
	g=d*e; // g is area of rectangle
	
	printf("perimeter of rectangle is%f",z);
	printf(" area of circle is %f",g);
	
	printf("enter radius of circle");
	scanf("%f",&r);
	
	h=2*3.1415*r; //h is circumference of circle
	u=3.1415*r*r; // u is area of circle
	
	printf("circumference of circle is%f",h);
	printf("area of circle is%f",u);
	
	return 0;	
}