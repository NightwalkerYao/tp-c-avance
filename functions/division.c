#include<stdio.h>
#include "../headers/division.h"

double division(double a, double b) {
	if(b != 0)
		return a/b;
	else {
		printf("Erreur : Division par zero\n");
		return 0.0;
	}
}
