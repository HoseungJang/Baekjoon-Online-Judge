#include <stdio.h>

int m[10001];

int getnotselfnum(int ctor) {
	int n = ctor;
	while(ctor>0) {
		n += ctor%10;
		ctor/=10;
	}
	return n;
}

int main() {
	int i;
	for(i=1;i<=10000;i++) {
		m[getnotselfnum(i)] = 1;
		if(!m[i]) {
			printf("%d\n",i);
		}
	}
	return 0;
}
