#include <stdio.h>

int gcd(int a, int b)
{
	int temp;
	while(a % b > 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	
	return b;
}

int main(void)
{
	int i, tcase, m, n, x, y, lcm;
	
	scanf("%d", &tcase);
	for(i = 0; i < tcase; i++)
	{
		scanf("%d %d %d %d", &m, &n, &x, &y);
		lcm = m * n / gcd(m, n);
		while(x != y)
		{	
			if(x > y)
			{
				y += n;
			}
			else
			{
				x += m;
			}
			if(x > lcm)
			{
				x = -1;
				break;
			}
		}
		printf("%d\n", x);
	}
	return 0;
}
