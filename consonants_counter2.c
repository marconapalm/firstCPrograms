/*
 * 	source_file.c
 *	Program that counts how many consonants are in an entered string
 *  Created on: 03/nov/2013
 *      Author: Marco Rapaccini
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> /*The program needs this library to use tolower function*/

void consonants_counter(){
	char line[100];
	int slide_line;
	int counter=0;
	puts("Enter a string: ");
	fgets(line, sizeof(line), stdin);
	for (slide_line=0; slide_line<strlen(line);slide_line++){
		switch(tolower(line[slide_line])){ /*tolower is a function that converts uppercase characters in lowercase*/
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
			counter++; /*In all of this cases, increase the consonants counter*/
			break;
		default:
			counter+=0; /*In other cases, do not increase*/
		}
	}
	if (counter==1){
		printf("There is just %i consonant", counter);
	}
	else{
		printf("There are %i consonants", counter);
	}
}

int main(){
	consonants_counter(); /*Invoking the procedure*/
	return 0;
}
