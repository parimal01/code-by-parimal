#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,b=5,c;
	float d;
	printf("The value of A is %d",a);
	printf("\nThe value of B is %d",b);
	  c=a+b;
	  printf("\nSum is %d\n",c);
	  
	  c=a-b;
	  printf("Subtration is %d\n",c);
	  
	  printf("Multiplication is %d\n",a*b);
	  
	  d=a/b;
	  printf("\nDivision is %.4f",d);
	  
	getch();
}