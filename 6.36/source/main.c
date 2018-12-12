#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[80];
	int l, i;

	printf("Enter a string: ");
	gets(str);

	/* Find the length of the string */
	for (l = 0; str[l] != '\0'; l++);
	/* Display the string backwards */
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	system("pause");
	return 0;
}