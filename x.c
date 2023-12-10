#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d;
	
	printf("enter value of 1st point in x axis ");
	scanf("%f",&x1);
	
	printf("enter value of 2nd point in x axis");
	scanf("%f",&x2);
	
	printf("enter value of 1st point in y axis");
	scanf("%f",&y1);
	
	printf("enter value of 2nd point in y axis");
	scanf("%f",&y2);
	
	d=sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
	
	printf("distance between two points is %f",d);
	
	return 0;
}