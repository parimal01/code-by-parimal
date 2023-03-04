#include<stdio.h>
#include<conio.h>
int main()
{
	float celsius, fahrenheit;
	
	printf("Enter temp in Celsius:");
	scanf("%f",&celsius);
	
	fahrenheit=(1.9*celsius)+32;
	printf("\nTempreture in Fahrenheit:%f",fahrenheit);
	return(0);
}