/*
 * prog_sorg.c
 *
 *  Created on: 02/nov/2013
 *      Author: Marco Rapaccini & Carlo Alessi
 */

#include <stdio.h>
#include <stdlib.h>

void conta_vocali(char stringa[100]){
	int vocali = 0;
	int i= 0;
	while (stringa[i]!= '\0'){
		if (stringa [i] == 'a' ||stringa [i] =='e' ||stringa [i] == 'i' ||stringa [i] == 'o'
		                ||stringa [i] == 'u' ||stringa [i] == 'A' ||stringa [i] == 'E'
		                ||stringa [i] == 'I' ||stringa [i] == 'O' ||stringa [i] == 'U'){
				vocali = vocali + 1;
		}
		i++;
	}
	printf("le vocali sono %i", vocali);
}


int main(){
        char stringa[100];
        puts("inserisci una stringa: ");
        scanf("%s", stringa);
        conta_vocali(stringa);
        return 0;
}
