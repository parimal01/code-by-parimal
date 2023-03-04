#include<stdio.h>
#include<conio.h>
int main()
{
	float i,p,r,n;
	printf("Enter the value p:\n");
	scanf("%f",&p);
	printf("Enter the value r:\n");
	scanf("%f",&r);
	printf("Enter the value n:\n");
	scanf("%f",&n);
	i=(p*r*n)/100;
	printf("Interest::%f",i);
	getch();
}