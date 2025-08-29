//C program to reverse a string without using strrev()

#include<stdio.h>

int main()
{
	char str[100],rev[100];
	int i, j, len;

	printf("Enter a string\n");
	scanf_s("%s", str, 100);

	len = strlen(str);

	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		rev[i] = str[j];
	}

	rev[i] = '\0';
	
	printf("Reversed String %s\n", rev);
	return 0;
}