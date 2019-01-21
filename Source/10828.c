#include <stdio.h>
#include <string.h>

typedef struct _stack
{
	int data;
}STACK;

STACK stack[10000];
int stack_top = 0;

void push(int data)
{
	stack[stack_top++].data = data;
}

int pop(void)
{
	if(stack_top < 1)
	{
		return -1;
	}
	return stack[--stack_top].data;
}

int main(void)
{
	int i, N;
	char command[6];
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%s", command);
		
		if(strcmp("push", command) == 0)
		{
			int input;
			scanf("%d", &input);
			
			push(input);
		}
		else if(strcmp("pop", command) == 0)
		{
			printf("%d\n", pop());
		}
		else if(strcmp("size", command) == 0)
		{
			printf("%d\n", stack_top);
		}
		else if(strcmp("empty", command) == 0)
		{
			if(stack_top < 1)
			{
				printf("%d\n", 1);
			}
			else
			{
				printf("%d\n", 0);
			}
		}
		else if(strcmp("top", command) == 0)
		{
			if(stack_top < 1)
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", stack[stack_top - 1].data);
			}
		}
	}
	
	return 0;
}
