#include <stdio.h>

int main(void)
{
	//입력받을 용도의 변수들 
	int i, testcase;
	int go, arrive;
	
	//최소 거리를 구할 변수들
	int distance;
	long long count, pow;
	
	scanf("%d", &testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%lld %lld", &go, &arrive);
		distance = arrive - go;
		for(count = 1;;count++)
		{
			pow = count * count;
			if(distance > (pow - count) && distance <= (pow + count))
			{
				if(distance > pow)
				{
					printf("%d\n", count * 2);
					break;
				}
				printf("%d\n", count * 2 - 1);
				break;
			}
		}
	}
	
	return 0;
}
