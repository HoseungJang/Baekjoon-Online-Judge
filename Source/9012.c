#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, T, balance = 0;
	char input[51];
	
	scanf("%d", &T);
	int result[T];
	for(i = 0; i < T; i++)
	{
		scanf("%s", input);
		for(j = 0; j < strlen(input); j++)
		{
			if(input[j] == '(')
			{
				balance++;
			}
			else
			{
				balance--;
			}
			
			if(balance < 0)
			{
				break;
			}
		}
		
		result[i] = balance;
		balance = 0;
	}
	
	for(i = 0; i < T; i++)
	{
		if(result[i] == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}
