/*
 * main.c
 *
 *  Created on: 21.11.2019
 *      Author: Froemberg Raphael
 */


#include "mix.h"

int main(void){
	/* Befehl für Scanf/printf Reihenfolge auf Windows */
	setvbuf(stdout, NULL, _IONBF,0);

	/* 3 Char-Arrays definieren */
	char strg1[32], strg2[32], result[63];

	/* Eingabe Wort1 */
	printf("Wort eins eingeben:");
	scanf("%31s", &strg1[0]);

	/* Eingabe Wort2 */
	printf("Wort zwei eingeben:");
	scanf("%31s", &strg2[0]);

	/* Ausführen der Mix Funktion */
	mix(strg1, strg2, result);
	printf("Gemixter String: %s", result);

	return 0;
}
