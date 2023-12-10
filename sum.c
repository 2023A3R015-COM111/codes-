#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("enter the value of 1st number");
	scanf("%f",&a);
	printf("enter the value of 2nd number");
	scanf("%f",&b);
	printf("enter the value of 3rd number");
	scanf("%f",&c);
	d=(a+b)/c;
	printf("the sum of 1st 2 numbers divide by 3rd number is %f",d);
	// add the first two numbers then divide their sum to the 3rd number
	return 0;
}