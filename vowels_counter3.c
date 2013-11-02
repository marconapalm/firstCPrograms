/*
 * 	source_file.c
 *	Little program that counts vowels of an entered string
 *  Created on: 02/nov/2013
 *  Author: Marco Rapaccini & Carlo Alessi
 */

#include <stdio.h>

void vowels_counter(char line[100]){
	int vowels = 0;
	int i= 0;
	while (line[i]!= '\0'){ /*Continue until the array finishes*/
		if (line [i] == 'a' ||line [i] =='e' ||line [i] == 'i' ||line[i] == 'o'
		                ||line [i] == 'u' ||line [i] == 'A' ||line [i] == 'E'
		                ||line [i] == 'I' ||line [i] == 'O' ||line [i] == 'U'){
				vowels = vowels + 1;
		}
		i++; /*Slide the array's characters*/
	}
	if (vowels==1){
		printf("There is just %i vowel", vowels);
	}
	else{
		printf("There are %i vowels", vowels);
	}

}

int main(){
        char line[100];
        puts("Enter the string: ");
        scanf("%s", line);
        vowels_counter(line); /*Invoking method*/
        return 0;
}
