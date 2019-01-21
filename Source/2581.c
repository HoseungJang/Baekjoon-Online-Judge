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
	int M, N, min, sum = 0;
	
	scanf("%d %d", &M, &N);
	
	for(M; M <= N; M++)
	{
		if(check_decimal(M))
		{
			min = M;
			sum += M;
			M++;
			break;
		}
	}
	
	for(M; M <= N; M++)
	{
		if(check_decimal(M))
		{
			sum += M;
		}
	}
	
	if(sum == 0)
	{
		printf("%d\n", -1);
	}
	else
	{
		printf("%d\n%d", sum, min);
	}
	
	return 0;
}
