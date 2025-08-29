//Print the first n numbers of the Fibonacci series
#include<stdio.h>
int main()
{
	int num,first=0,second=1,next;
	printf("Enter number of terms\n");
	scanf_s("%d", &num);

	printf("Fibonacci series: ");

	for (int i = 0; i < num; i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d ", next);
	}


	return 0;
}