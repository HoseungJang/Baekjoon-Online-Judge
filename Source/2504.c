#include <stdio.h>
#include <string.h>

char stack[30];
int stack_top;

void push(char data)
{
	stack[stack_top++] = data;
	return;
}

char pop(void)
{
	return stack[--stack_top];
}

int main(void)
{
	int i, temp = 1, result = 0;
	char input[31];
	
	scanf("%s", input);
	
	for(i = 0; i < strlen(input); i++)
	{
		switch(input[i])
		{
			case '(' : {
				temp *= 2;
				push(input[i]);
				break;
			}
			case '[' : {
				temp *= 3;
				push(input[i]);
				break;
			}
			case ')' : {
				if(stack_top < 1)
	 			{
					printf("%d", 0);
					return 0;
				}
				else if(stack[stack_top - 1] == '[')
				{
					printf("%d", 0);
					return 0;
				}
				else if(input[i - 1] == '(')
				{
					result += temp;
				}
				pop();
				temp /= 2;
				break;
			}
			case ']' : {
				if(stack_top < 1)
				{
					printf("%d", 0);
					return 0;
				}
				else if(stack[stack_top - 1] == '(')
				{
					printf("%d", 0);
					return 0;
				}
				else if(input[i - 1] == '[')
				{
					result += temp;
				}
				pop();
				temp /= 3;
				break;
			}
		}
	}
	
	if(stack_top > 0)
	{
		printf("%d", 0);
	}
	else
	{
		printf("%d", result);
	}
	return 0;
}
