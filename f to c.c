#include<stdio.h>
#include<math.h>
int main()
{
	float t,c;
	
	printf("enter temperature in Fahrenheit");
	scanf("%f",&t);
	
	c=5.0/9.0*(t-32);
	
	printf("temperature in celsius is%f",c);
	
	return 0;
}