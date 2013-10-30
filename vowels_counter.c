/*
 *  source_file.c
 *	This program counts how many vowels there are in an entered string
 *  Created on: 28/ott/2013
 *  Author: Marco Rapaccini
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char string[101];
	int find=0, num_vowels=0;
	puts("Enter the string: \n");
	scanf("%s", string);
	while (find<strlen(string)) { /*The cycle will continue until there are no more characters in the string*/
		if (string[find]=='A' || string[find]=='a' || string[find]=='E' || string[find]=='e' || string[find]=='I' || string[find]=='i' || string[find]=='O' || string[find]=='o' || string[find]=='U' || string[find]=='u'){
			num_vowels++;
		}
		find++;
	}
	if (num_vowels==1){
		printf("There is just %i vowel", num_vowels);
	}
	else{
		printf("There are %i vowels", num_vowels);
	}
	return 0;
}
