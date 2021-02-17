#include "../headers/perimetre_triangle.h"
#include "../headers/somme.h"

double perimetre_triangle(double a, double b, double c) {
  return somme(somme(a,b), c);
}
