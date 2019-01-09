#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, count = 0, max_cnt = 0;
	int alphabet[26];
	char pnt_apb, word[1000000];
	
	scanf("%s", word);
	
	for(i = 65; i < 91; i++) {
		count = 0;
		for(j = 0; j < strlen(word); j++) {
			if(word[j] == i || word[j] == i + 32) {
				count++;
			}
		}
		alphabet[i-65] = count;
	}
	
	for(i = 0; i < 26; i++) {
		if(max_cnt < alphabet[i]) {
			max_cnt = alphabet[i];
			pnt_apb = i+65;
		}
		else if(max_cnt == alphabet[i]) {
			pnt_apb = '?';
		}
	}
	
	printf("%c\n", pnt_apb);
	
	return 0;
}
