#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, M, N, multiply = 1;
	
	scanf("%d %d", &M, &N);
	
	if(N > 1)
	{
		int sieve[N + 1];
		
		memset(sieve, 0, sizeof(sieve));
		for(i = 2; i <= N; i++)
		{
			for(j = i; j * multiply <= N; multiply++)
			{
				sieve[j * multiply]++;
			}
			multiply = 1;
		}
		
		for(M; M <= N; M++)
		{
			if(M > 1 && sieve[M] < 2)
			{
				printf("%d\n", M);
			}
		}
	}
	
	return 0;
}
