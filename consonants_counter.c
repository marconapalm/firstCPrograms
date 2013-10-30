/*
 *  source_file.c
 *  Program created to return the consonants' number in a sentence
 *  Created on: 30/ott/2013
 *      Author: Marco Rapaccini
 */

#include <stdio.h>
#include <string.h>

void num_cons(char line[101]){ /*Use a method, called num_cons() instead of writing all the code in the main function*/
	int slide_line=0; /*Create an integer variable to slide the sentence and find a consonant. Set it to 0*/
	int num_consonants=0; /*Create an integer variable to count all the consonants and set it to 0*/
	char consonants[]="BbCcDdFfGgHhJjKkLlMmNnPpQqRrSsTtVvZzYyWw"; /*Create an array of characters, containing all the consonants*/
	int slide_consonant=0; /*Create an integer variable to slide the consonants in the previous array. Set it to 0*/
	while (slide_line<strlen(line)){ /*Can't go over the sentence's length */
		while (slide_consonant<strlen(consonants)) { /*Can't slide the consonants over the previous array's length*/
			while (line[slide_line]==consonants[slide_consonant]){ /*Control if the character selected is equal to the selected consonant*/
				num_consonants++; /*Finally it found a consonant, so increase the variable*/
				break; /*Let's go out of the cycle, because there is more to do*/
			}
			slide_consonant=slide_consonant+1; /*Increase slide_consonant, so there'll be a new consonant to control*/
		}
		slide_line++; /*All the controls are done, so let's see another character of the sentence*/
		slide_consonant=0; /*But first set slide_consonant to 0, or the controls will start from the last consonant controlled*/
	}
	if (num_consonants==1){
		printf("There is just %i consonant",num_consonants);
	}
	else{
	printf("There are %i consonants", num_consonants);
	}
}
 int main(){ /*This is the main function*/
	 char line[101]; /*Create an array of 100 characters. Remember the last character is for \0*/
	 puts("Enter the sentence \n");
	 scanf("%s", line);
	 num_cons(line); /*Method invoked*/
	 return 0;
 }
