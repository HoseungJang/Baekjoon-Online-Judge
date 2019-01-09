#include <stdio.h>
#include <string.h>
#define string_size 101

int main(void)
{
	int increase_i, size, i = 0, j = 0, count = 0;
	char string[string_size];
	char croatia[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	scanf("%s", string);
	size = strlen(string);
	while(i < size)
	{
		increase_i = 1;
		for(j = 0; j < 8; j++)
		{
			int croatia_size = strlen(croatia[j]);
			if((size - i) >= croatia_size)
			{
				if(!strncmp(&string[i], croatia[j], croatia_size))
				{
					increase_i = croatia_size;
					break;
				}
			}
		}
		i += increase_i;
		count++;
	}
	
	printf("%d\n", count);
	return 0;
}
