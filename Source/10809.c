#include <stdio.h>
#include <string.h>

int check_same(char cp, int word_len, char *word) {
	int i;
	for(i = 0; i < word_len; i++) {
		if(word[i] == cp) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	int word_len, word_index = 0, count;
	char word[101];
	
	scanf("%s", word);
	word_len = strlen(word);
	
	for(count = 97; count <= 122; count++) {
		printf("%d ", check_same(count, word_len, word));
	}
	
	return 0;
}
