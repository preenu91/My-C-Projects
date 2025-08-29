#include<stdio.h>

int main()
{
	int original,num,remainder,rev=0;
	printf("Enter a number to reverse\n");
	scanf_s("%d", &original);

	num = original;
	while (num != 0)
	{
		remainder=num%10;
		rev = rev * 10 + remainder;
		num = num / 10;

	}

	printf("Reversed Number: %d\n", rev);

	// Optional: check if palindrome number
	if (rev == original)
		printf("The number is a palindrome.\n");
	else
		printf("The number is not a palindrome.\n");

	return 0;
}