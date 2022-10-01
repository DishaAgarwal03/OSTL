#include "stdio.h"
#include "maths1.h"
void main()
{
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	int sum=ADD(x, y);
	int diff=SUB(x, y);
	printf("Sum: %d \nDifference: %d\n", sum, diff);
}
