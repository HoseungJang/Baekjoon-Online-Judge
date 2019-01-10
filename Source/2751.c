#include <stdio.h>
#include <stdlib.h>

int *merge_sort(int *arr, int len)
{
	if(len == 1)
	{
		return arr;
	}
	
	int i;
	int *left_arr, *sorted_arr, *right_arr, left_size = len / 2, right_size = len - len / 2;
	int left_index = 0, right_index = 0, sorted_index = 0;
	
	sorted_arr = (int *)malloc(sizeof(int) * len);
	left_arr = (int *)malloc(sizeof(int) * left_size);
	right_arr = (int *)malloc(sizeof(int) * right_size);
	
	for(i = 0; i < left_size; i++)
	{
		left_arr[i] = arr[i];
	}
	
	for(i = left_size; i < len; i++)
	{
		right_arr[i - left_size] = arr[i];
	}
	
	left_arr = merge_sort(left_arr, left_size);
	right_arr = merge_sort(right_arr, right_size);
	
	do
	{
		if(left_arr[left_index] < right_arr[right_index])
		{
			sorted_arr[sorted_index++] = left_arr[left_index++];
		}
		else
		{
			sorted_arr[sorted_index++] = right_arr[right_index++];
		}
	}while((left_index < left_size) && (right_index < right_size));
	
	if(left_index < left_size)
	{
		while(left_index < left_size)
		{
			sorted_arr[sorted_index++] = left_arr[left_index++];
		}
	}
	else
	{
		while(right_index < right_size)
		{
			sorted_arr[sorted_index++] = right_arr[right_index++];
		}
	}
	
	return sorted_arr;
}

int main(void)
{
	int i, len;
	int *sorted_arr;
	
	scanf("%d", &len);
	int arr[len];
	
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	sorted_arr = merge_sort(arr, len);
	
	for(i = 0; i < len; i++)
	{
		printf("%d\n", sorted_arr[i]);
	}
	
	return 0;
}
