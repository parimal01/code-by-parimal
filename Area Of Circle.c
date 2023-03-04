#include<stdio.h>
#include<conio.h>
#define PI 3.142
  {
	float r, a;
	clrscr();
	printf("Enter the radius:\n");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Area of Circle is %.2f",a);
	getch();
  }