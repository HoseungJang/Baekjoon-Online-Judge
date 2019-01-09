#include <stdio.h>

int main(void)
{
	int input, i = 1, sum = 1, denominator, numerator;
	
	scanf("%d", &input);
	while(sum < input)
	{
		sum += ++i;
	}
	
	if(i % 2)
	{
		numerator = 1;
		denominator = i;
		
		printf("%d/%d\n", numerator + (sum - input), denominator - (sum - input));
	}
	else
	{
		numerator = i;
		denominator = 1;
		
		printf("%d/%d\n", numerator - (sum - input), denominator + (sum - input));
	}
	
	return 0;
}
