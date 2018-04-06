/*
 * Exercise 2-4
 * Write an alternative version of squeeze(s1,s2) 
 * that deletes each character in s1 that matches any character in the string s2.
 */

#include <stdio.h>

void squeezes(char s1[], char s2[]);

int main() {
	
	char s1[5] = "Imran";
	char s2[6] = "Blerta";
	
	squeezes(s1, s2);
	printf("%s\n", s1);
	return 0;
}

void squeezes(char s1[], char s2[]) {
	int i, j, k;

	for(i = k = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++);
		if(s2[j] == '\0') {s1[k++] = s1[i];}
	}
	s1[k] = '\0';
}
