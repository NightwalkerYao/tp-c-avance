#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "./headers/somme.h"
#include "./headers/soustraction.h"
#include "./headers/produit.h"
#include "./headers/division.h"
#include "./headers/perimetre_triangle.h"
#include "./headers/aire_triangle.h"
#include "./headers/aire_rectangle.h"

int main(int argc, char *argv[]) {
	double a = atof(argv[2]);
	double b = atof(argv[3]);
	char* op = argv[1];

	if(strcmp(op, "--somme") == 0 || strcmp(op, "-s") == 0) {
		printf("%.2f + %.2f = %.2f\n", a, b, somme(a, b));
	} else if(strcmp(op, "--soustraction") == 0 || strcmp(op, "-S") == 0) {
		printf("%.2f - %.2f = %.2f\n", a, b, soustraction(a, b));
	} else if(strcmp(op, "--produit") == 0 || strcmp(op, "-p") == 0) {
		printf("%.2f * %.2f = %.2f\n", a, b, produit(a, b));
	} else if(strcmp(op, "--division") == 0 || strcmp(op, "-d") == 0) {
		printf("%.2f / %.2f = %.2f\n", a, b, division(a, b));
	} else if(strcmp(op, "--aire-rectangle") == 0 || strcmp(op, "-ar") == 0) {
		if(a < b) {
			double tmp = a;
			a = b;
			b = tmp;
		}
		printf("Longueur : %.2f\nLargeur : %.2f\nAire : %.2f\n", a, b, aire_rectangle(a, b));
	} else if(strcmp(op, "--perimetre-triangle") == 0 || strcmp(op, "-pt") == 0) {
		double c = atof(argv[4]);
		printf("Cote 1 : %.2f\nCote 2 : %.2f\nCote 3 : %.2f\nPerimetre : %.2f\n", a, b, c, perimetre_triangle(a, b, c));
	} else if(strcmp(op, "--aire-triangle") == 0 || strcmp(op, "-at") == 0) {
		double c = atof(argv[4]);
		printf("Cote 1 : %.2f\nCote 2 : %.2f\nCote 3 : %.2f\nAire : %.2f\n", a, b, c, aire_triangle(a, b, c));
	}
	else {
		printf("Operation '%s' invalide.\n", argv[1]);
	}

	return 0;
}
