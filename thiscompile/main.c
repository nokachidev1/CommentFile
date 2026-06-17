/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C.
Code, Compile and Run online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int salary;
	printf("salary\n");
	scanf("%d", &salary);
	printf("Yearly bonus: %d\t", salary/100*15);
	printf("TAX: %d\n", salary/100*7);
	printf("Subtotal: %d", (salary+(salary/100*15))-(salary/100*7));
}
