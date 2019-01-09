#include <stdio.h>

int main(void)
{
	int i, num, input, set_count = 0;
	int set[10] = {0,};
	
	scanf("%d", &input);
	if(input == 0)
	{
		set_count = 1;
	}
	else
	{
		while(input > 0)
		{
			num = input%10;
			input /= 10;
			set[num] += 1;
		}
		num = set[6] + set[9];
		set_count = num / 2 + num % 2;
		for(i = 0; i < 10; i++)
		{
			if(i != 6 && i != 9)
			{
				num = set[i];
				if(set_count < num)
				{
					set_count = num;
				}
			}
		}
	}
	printf("%d\n", set_count);
	
	return 0;
}
