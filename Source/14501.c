#include <stdio.h>

int main(void) {
	int i, N;
	scanf("%d", &N);
	int T[N + 2], P[N + 2], D[N + 2];
	
	for(i = 1; i < N + 1; i++) {
		scanf("%d %d", &T[i], &P[i]);
	}
	T[N + 1] = 0;
	P[N + 1] = 0;
	D[N + 1] = 0;
	
	if(T[N] > 1) {
		D[N] = 0;
	}
	else {
		D[N] = P[N];
	}
	
	for(i = N - 1; i > 0; i--) {
		if(i + T[i] <= N + 1) {
			D[i] = D[i + 1] > (D[T[i] + i] + P[i]) ? D[i + 1] : (D[T[i] + i] + P[i]);
		}
		else {
			D[i] = D[i + 1];
		}
	}
	printf("%d", D[1]);
	
	return 0;
}
