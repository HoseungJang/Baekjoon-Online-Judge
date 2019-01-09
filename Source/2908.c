#include <stdio.h>

int main(void)
{
	int i, compare[3];
	char num[4];
	
	for(i = 0; i < 2; i++)
	{
		scanf("%s", num);
		
		compare[i] = ((num[2] - 48) * 100) + ((num[1] - 48) * 10) + ((num[0] - 48) * 1);
	}
	
	if(compare[0] > compare[1])
	{
		printf("%d\n", compare[0]);
	}
	else
	{
		printf("%d\n", compare[1]);
	}
	
	return 0;
}
