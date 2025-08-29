#include<stdio.h>

int factorial(int n);

int main()
{
	int num, fact = 1;
	printf("Enter a number\n");
	scanf_s("%d", &num);
	if (num == 0 || num == 1)
		printf("Factorial is 1");
	else
	printf("Factorial is %d", factorial(num));


	return 0;
}

int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
	return n * factorial(n - 1);
}