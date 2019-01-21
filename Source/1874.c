#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i, input, num = 1, stack_index = 0, command_index = 0;
	
	scanf("%d", &n);
	
	int stack[n];
	char command[n * 2 + 1];
	
	memset(command, 0, sizeof(command));
	for(i = 0; i < n; i++)
	{
		scanf("%d", &input);
		
		while(num <= input)
		{
			stack[stack_index++] = num++;
			command[command_index++] = '+';
		}
		
		if(stack[stack_index - 1] == input)
		{
			command[command_index++] = '-';
			stack_index--;
		}
	}
	
	if(command_index < n * 2)
	{
		printf("NO\n");
	}
	else
	{
		for(i = 0; i < n * 2; i++)
		{
			printf("%c\n", command[i]);
		}
	}
	
	return 0;
}
