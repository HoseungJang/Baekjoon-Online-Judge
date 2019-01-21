#include <stdio.h>
#include <math.h>

int check_decimal(int num)
{
	if(num < 2)
	{
		return 0;
	}
	else
	{
		int i;
		for(i = 2; i <= sqrt(num); i++)
		{
			if(num % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}

int main(void)
{
	int i, input, count;
	
	scanf("%d", &input);
	while(input != 0)
	{
		count = 0;
		for(i = input + 1; i <= input * 2; i++)
		{
			if(check_decimal(i))
			{
				count++;
			}
		}
		printf("%d\n", count);
		scanf("%d", &input);
	}
	
	return 0;
}
