#include <stdio.h>
#include <string.h>

int main(void)
{
	int input, count;
	int isempty = 1;
	int queue[10000],  front = 0, qindex = 0, i;
	char command[6];
	
	scanf("%d", &count);
	while(count-- > 0)
	{
		scanf("%s", command);
		if(!strcmp(command, "push"))
		{
			scanf("%d", &input);
			queue[qindex++] = input;
			isempty = 0;
		}
		else if(!strcmp(command, "pop"))
		{
			if(isempty)
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", queue[front++]);
				if(front == qindex)
				{
					isempty = 1;
				}
			}
		}
		else if(!strcmp(command, "size"))
		{
			printf("%d\n", qindex - front);
		}
		else if(!strcmp(command, "empty"))
		{
			printf("%d\n", isempty);
		}
		else if(!strcmp(command, "front"))
		{
			if(isempty)
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", queue[front]);
			}
		}
		else if(!strcmp(command, "back"))
		{
			if(isempty)
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", queue[qindex-1]);
			}
		}
	}
	
	return 0;
}
