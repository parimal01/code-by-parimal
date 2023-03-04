#include<stdio.h>
#include<conio.h>
int main()
{
	int num, square, cube;
	
	printf("Enter an interger:  ");
	scanf("%d",&num);
	
	square=num*num;
	cube=num*num*num;
	
	printf("Square of %d is: %d \n", num, square);
	printf("Cube of %d is: %d",num, cube);
	
	return 0;
}