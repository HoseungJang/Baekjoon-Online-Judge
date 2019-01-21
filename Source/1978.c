#include <stdio.h>

int main(void)
{
	int i, j, input, N, count = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &input);
		if(input != 1)
		{
			count++;
			for(j = 2; j < input; j++)
			{
				if(input % j == 0)
				{
					count--;
					break;
				}
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}
