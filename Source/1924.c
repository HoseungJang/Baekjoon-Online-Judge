#include <stdio.h>

int main() {
	int i, month, day;
	int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d %d", &month, &day);
	for(i=1; i<month; i++) {
		day+=days[i-1];
	}
	switch(day%7) {
		case 1:printf("MON\n"); break;
		case 2:printf("TUE\n"); break;
		case 3:printf("WED\n"); break;
		case 4:printf("THU\n"); break;
		case 5:printf("FRI\n"); break;
		case 6:printf("SAT\n"); break;
		case 0:printf("SUN\n"); break;
	}
	
	return 0;
}
