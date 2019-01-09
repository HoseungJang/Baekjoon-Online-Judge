#include <stdio.h>

int main(void)
{
	int i = 1, input, room = 1;
	
	scanf("%d", &input);
	
	while(input > room)
	{
		room += 6 * i++;
	}
	printf("%d\n", i);
	
	return 0;
}
