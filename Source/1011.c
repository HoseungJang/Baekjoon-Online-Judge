#include <stdio.h>

int main(void)
{
	//�Է¹��� �뵵�� ������ 
	int i, testcase;
	int go, arrive;
	
	//�ּ� �Ÿ��� ���� ������
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
