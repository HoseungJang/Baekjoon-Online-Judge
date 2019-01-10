#include <stdio.h>

int main(void)
{
	int N, i, j, temp;
	
	scanf("%d", &N);
	int numarr[N];
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &numarr[i]);
	}
	
	for(i = 0; i < N; i++)
	{
		for(j = 1; j < N - i; j++)
		{
			if(numarr[j - 1] > numarr[j])
			{
				temp = numarr[j];
				numarr[j] = numarr[j - 1];
				numarr[j - 1] = temp;
			}
		}
	}
	
	for(i = 0; i < N; i++)
	{
		printf("%d\n", numarr[i]);
	}
	
	return 0;
}
