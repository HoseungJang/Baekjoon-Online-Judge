#include <stdio.h>

char star[3072][6143];
void fill_star(int n, int x, int y) {
	if(n==3) {
		star[y][x] = '*';
		star[y+1][x-1] = '*';
		star[y+1][x+1] = '*';
		star[y+2][x+2] = '*';
		star[y+2][x+1] = '*';
		star[y+2][x] = '*';
		star[y+2][x-1] = '*';
		star[y+2][x-2] = '*';
		return;
	}
	fill_star(n/2,x,y);
	fill_star(n/2,x-(n/2),y+(n/2));
	fill_star(n/2,x+(n/2),y+(n/2));
}

int main() {
	int n, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		for(j=0;j<n*2-1;j++) {
			star[i][j] = ' ';
		}
	}
	fill_star(n, n-1, 0);
	for(i=0;i<n;i++) {
		for(j=0;j<n*2-1;j++) {
			printf("%c", star[i][j]);
		}
		printf("\n");
	}
}
