#include <stdio.h>
#include <string.h>

int main(void)
{
	int N, input, i, j;
	int arr[10001];
	
	scanf("%d", &N);
	memset(arr, 0, sizeof(arr));
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &input);
		arr[input] += 1;
	}
	
	for(i = 1; i < 10001; i++)
	{
		if(arr[i] > 0)
		{
			for(j = 0; j < arr[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	
	return 0;
}
