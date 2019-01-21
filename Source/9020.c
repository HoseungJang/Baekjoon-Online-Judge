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
	int i, T, n, num1, num2;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++)
	{
		scanf("%d", &n);
		num1 = n/2;
		num2 = num1;
		
		if(check_decimal(num1) == 0)
		{
			num1--;
			num2++;
			while(!(check_decimal(num1) && check_decimal(num2)))
			{
				num1--;
				num2++;
			}
		}
		
		printf("%d %d\n", num1, num2);
	}
	
	return 0;
}
