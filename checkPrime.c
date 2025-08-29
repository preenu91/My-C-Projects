#include <stdio.h>
int main()
{
	int num, isPrime = 1;
	printf("Enter a number\n");
	scanf_s("%d", &num);

	if (num <= 1)
	{
		isPrime = 0;
	}
	else
	{
		for (int i = 2; i <= num / 2; i++) //for (int i = 2; i*i <= num; i++)
		{
			if (num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
	}

	isPrime ? printf("%d is a Prime Number\n",num): printf("%d is not a Prime Number\n", num);
	return 0;
 }