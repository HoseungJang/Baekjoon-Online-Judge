#include <stdio.h>

int main(void)
{
	int i, tcase, H, W, N, count_room = 1;
	
	scanf("%d", &tcase);
	for(i = 0; i < tcase; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		while(N > H)
		{
			N -= H;
			count_room++;
		}
		printf("%d", N);
		if(count_room < 10)
		{
			printf("%d%d\n", 0, count_room);
		}
		else
		{
			printf("%d\n", count_room);
		}
		count_room = 1;
	}
	
	return 0;
}
