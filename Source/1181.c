#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b)
{
	char *str1 = (char *)a;
	char *str2 = (char *)b;
	
	if(strlen(str1) > strlen(str2))
	{
		return 1;
	}
	
	if(strlen(str1) < strlen(str2))
	{
		return -1;
	}
	
	if(strcmp(str1, str2) > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int i, N;
	
	scanf("%d", &N);
	char word[N][51];
	
	for(i = 0; i < N; i++)
	{
		scanf("%s", word[i]);
	}
	
	qsort(word, N, 51, compare);
	
	printf("%s\n", word[0]);
	for(i = 1; i < N; i++)
	{
		if(strcmp(word[i - 1], word[i]) != 0)
		{
			printf("%s\n", word[i]);
		}
	}
	
	return 0;
}
