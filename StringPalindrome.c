#include<stdio.h>
#include <string.h>

int main()
{
	char str[100],rev[100];
	int len,i,j;

	printf("Enter a string\n");
	scanf_s("%s", str, 100);
	len = strlen(str);

	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		rev[i] = str[j];
	}
	rev[i] = '\0';
	if (strcmp(rev,str)==0)
		printf("Palindrome\n");
	else
		printf("Not a Palindrome\n");

	/*
	* for(i=0;i<len/2;i++)
	* {
	* if(str[i]!=str[len-i-1])
	* {
	* flag=0;break;
	* }
	* }
	* 
	* if(flag) palindrome
	* else not palindrome
	*/

	return 0;
}