/*
 * mix.c
 *
 *  Created on: 21.11.2019
 *      Author: Froemberg Raphael
 */

#include "mix.h"

void mix(char strg1[], char strg2[], char result[]) {
	int check1 = 1, check2 = 1, count = 0;

	/* Schleife um alle Stellen der Char arrays durchzugehen.
	 * Wenn Der Inhalt nicht 'Leer' ist, wird der enthaltene Buchstaben ausgegeben
	 */

	for (int i = 0; i < 32; i++) {
		if (strg1[i] == '\0') {
			check1 = 0;
		}
		if (strg2[i] == '\0') {
			check2 = 0;
		}
		if (check1) {
			result[count++] = strg1[i];
		}
		if (check2) {
			result[count++] = strg2[i];
		}
	}
	result[count] = '\0';
}
