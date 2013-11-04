/*
 * 		source_file.c
 *		This program reads a string from input.txt and counts vowels, consonants,
 *		numbers and other characters, that are written in a summary.
 *		There will be 5 output files: consonants.txt, vowels.txt, numbers.txt, others.txt and summary.txt.
 *		They will be created in the Debug directory (the same of string_reader.exe)
 *		I've created this program helping me with Roberto D'Auria's program:
 *		(https://github.com/EverlastingFire/informatica/blob/master/c/count.c)
 *  	Created on: 04/nov/2013
 *      Author: Marco Rapaccini
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char character){ /*Procedure that controls if there's a vowel*/
	character=tolower(character);
	switch(character){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return 1;
	default:
		return 0;
	}
}

int is_consonant(char character){ /*Procedure that controls if there's a consonant*/
	character=tolower(character);
	switch(character){
	case 'b':
	case 'c':
	case 'd':
	case 'f':
	case 'g':
	case 'h':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'v':
	case 'w':
	case 'z':
	case 'x':
	case 'y':
		return 1;
	default:
		return 0;
	}
}

int is_number(char character){ /*Procedure that controls if there's a number*/
	switch (character){
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		return 1;
	default:
		return 0;
	}
}

int main(int argc, char *argv[])
{
	char line[100];
	int slide_line=0;
	int vowels_counter=0;
	int consonants_counter=0;
	int numbers_counter=0;
	int other_counter=0;

	FILE *input=fopen("input.txt", "r");
	FILE *vow=fopen("vowels.txt", "w");
	FILE *cons=fopen("consonants.txt", "w");
	FILE *num=fopen("numbers.txt", "w");
	FILE *other=fopen("other.txt", "w");
	FILE *sum=fopen("summary.txt", "w");

	while (fgets(line, sizeof(line), input)){ /*The fgets function reads characters from the input stream and put them into line*/
		while (line[slide_line]!='\0'){ /*Continue controlling characters until the array finishes*/
				if (is_vowel(line[slide_line])==1){ /*Is it a vowel? Compare with the right procedure*/
					fprintf(vow, "%c", line[slide_line]); /*Write in vowels.txt this vowel*/
					vowels_counter++; /*Increase the counter*/
				}
				else if (is_consonant(line[slide_line])==1){ /*Or is it a consonant? Compare with the right procedure*/
					fprintf(cons, "%c", line[slide_line]); /*Write in consonants.txt this consonant*/
					consonants_counter++; /*Increase the counter*/
				}
				else if (is_number(line[slide_line])==1){ /*Or is it a number? Compare with the right procedure*/
					fprintf(num, "%c", line[slide_line]); /*Write in numbers.txt this number*/
					numbers_counter++; /*Increase the counter*/
				}
				else {
					fprintf(other, "%c", line[slide_line]); /*So, it should be another character*/
					other_counter++; /*Increase the counter*/
				}
				slide_line++; /*Pass to another character of the entered string*/
		}
	}
	/*Write in summary.txt all the counters*/
	fprintf(sum, "There are: %i vocals, %i consonants, %i numbers, %i other characters", vowels_counter,
			consonants_counter, numbers_counter, other_counter);
	/*Then, close all the input/output streams*/
	fclose(input);
	fclose(vow);
	fclose(cons);
	fclose(num);
	fclose(other);
	fclose(sum);
	return 0;
}
