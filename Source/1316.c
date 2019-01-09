#include <stdio.h>
#include <string.h>
#define word_size 101
#define true 1
#define false 0

int check_group_word(char *word)
{
	int i = 0, j, size = strlen(word);
	char apb;
	while(i < size)
	{
		apb = word[i];
		while(apb == word[i])
		{
			i++;
		}
		for(j = i; j < size; j++)
		{
			if(apb == word[j])
			{
				return false;
			}
		}
	}
	return true;
}
int main(void)
{
	int i, word_case, group_word_count = 0;
	
	scanf("%d", &word_case);
	
	char word[word_size];
	
	for(i = 0; i < word_case; i++)
	{
		scanf("%s", word);
		if(check_group_word(word))
		{
			group_word_count++;
		}
	}
	printf("%d\n", group_word_count);
	
	return 0;
}
