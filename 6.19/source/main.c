#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13
int main()
{
	int i, j, k, l;
	int requency[SIZE] = { 0 };

	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		l = 1 + rand() % 6;
		j = 1 + rand() % 6;
		k = l + j;
		requency[k] = requency[k] + 1;
	}
	printf("%s%17s\n", "Face", "Frequency");
	for (i = 2; i <= 12; i++)
	{
		printf("%4d%17d\n",i, requency[i]);
	}
	system("pause");
	return 0;
}