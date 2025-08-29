#include<stdio.h>

int fibonacci(int n);

int main()
{
	int num;
	printf("Enter number of terms\n");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d ", fibonacci(i));
	}


	return 0;
}

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
	return fibonacci(n-1) + fibonacci(n - 2);
}


// Recursive Fibonacci is simple but inefficient for large n because 
// it recomputes values many times. Iterative or memoized version is 
// better for performance.