#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[10];
	int i, N;
	
	scanf("%d", &N);
	memset(arr, 0, sizeof(arr));
	
	while(N > 0)
	{
		arr[N % 10]++;
		N /= 10;
	}
	
	for(i = 9; i >= 0; i--)
	{
		while(arr[i] > 0)
		{
			printf("%d", i);
			arr[i]--;
		}
	}
	
	return 0;
}
