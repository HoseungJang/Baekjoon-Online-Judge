#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	
	if(num1 > num2)
	{
		return 1;
	}
	
	if(num1 < num2)
	{
		return -1;
	}
	
	return 0;
}

int main(void)
{
	int i, N, max_count = 0, sum = 0, median, mode = 0;
	
	scanf("%d", &N);
	int arr[N], num[8001];
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	memset(num, 0, sizeof(num));
	
	qsort(arr, N, sizeof(int), compare);
	for(i = 0; i < N; i++)
	{
		if(N / 2 == i)
		{
			median = arr[i];
		}
		sum += arr[i];
		num[arr[i] + 4000]++;
	}
	
	for(i = 0; i < 8001; i++)
	{
		if(num[i] > 0)
		{
			if(max_count < num[i])
			{
				max_count = num[i];
				mode = i - 4000;
			}
		}
	}
	
	for(i = mode + 4001; i < 8001; i++)
	{
		if(max_count == num[i])
		{
			mode = i - 4000;
			break;
		}
	}
	
	printf("%.0f\n", (double)sum / N);
	printf("%d\n", median);
	printf("%d\n", mode);
	printf("%d\n", arr[N - 1] - arr[0]);
	
	return 0;
}
