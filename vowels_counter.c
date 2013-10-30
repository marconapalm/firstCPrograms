/*
 *  source_file.c
 *	This program counts how many vowels there are in an entered line
 *  Created on: 28/ott/2013
 *  Author: Marco Rapaccini
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char line[101];
	int find=0, num_vowels=0;
	puts("Enter the string: \n");
	scanf("%s", line);
	while (find<strlen(line)) { /*The cycle will continue until there are no more characters*/
		if (line[find]=='A' || line[find]=='a' || line[find]=='E' || line[find]=='e' || line[find]=='I' || line[find]=='i' || line[find]=='O' || line[find]=='o' || line[find]=='U' ||line[find]=='u'){
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
