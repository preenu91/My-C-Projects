#include<stdio.h>

int main()
{
	int n, arr[100], i,max;
	
	printf("Enter the number of elements: ");
	scanf_s("%d", &n);

	if (n <= 0 || n > 100) {
		printf("Invalid size!\n");
		return 1;
	}

	printf("Enter %d elements:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	max = arr[0];

	for (i = 1; i < n; i++)
	{
		if(arr[i] > max)
		max = arr[i];
	}

	printf("Largest element is %d", max);
	return 0;
}