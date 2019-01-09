#include <stdio.h>
#include <string.h>
#define dial_size 16

int main(void)
{
	int i, size, time = 0, num_dial[dial_size];
	char word_dial[dial_size];
	
	scanf("%s", word_dial);
	size = strlen(word_dial);
	
	for(i = 0; i < size; i++)
	{
		if(word_dial[i] <= 'C')
		{
			num_dial[i] = 2;
		}
		else if(word_dial[i] <= 'F')
		{
			num_dial[i] = 3;
		}
		else if(word_dial[i] <= 'I')
		{
			num_dial[i] = 4;
		}
		else if(word_dial[i] <= 'L')
		{
			num_dial[i] = 5;
		}
		else if(word_dial[i] <= 'O')
		{
			num_dial[i] = 6;
		}
		else if(word_dial[i] <= 'S')
		{
			num_dial[i] = 7;
		}
		else if(word_dial[i] <= 'V')
		{
			num_dial[i] = 8;
		}
		else if(word_dial[i] <= 'Z')
		{
			num_dial[i] = 9;
		}
	}
	
	for(i = 0; i < size; i++)
	{
		time += num_dial[i] + 1;
	}
	
	printf("%d\n", time);
	
	return 0;
}
