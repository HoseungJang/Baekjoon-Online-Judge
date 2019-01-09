#include <stdio.h>

int main(void)
{
	int tcase, i, j, m, k, n;
	int neighbor[15][15] = {0,};
	
	for(i = 1; i <= 14; i++)
	{
		neighbor[0][i] = i;
		neighbor[i][1] = 1;
	}
	
	scanf("%d", &tcase);
	for(i = 0; i < tcase; i++)
	{
		scanf("%d %d", &k, &n);
		if(neighbor[k][n] == 0)
		{
			for(j = 1; j <= k; j++)
			{
				for(m = 2; m <= n; m++)
				{
					if(neighbor[j][m] == 0)
					{
						neighbor[j][m] = neighbor[j][m - 1] + neighbor[j - 1][m];
					}
				}
			}
			printf("%d\n", neighbor[k][n]);
		}
		else
		{
			printf("%d\n", neighbor[k][n]);
		}
	}
	return 0;
}
