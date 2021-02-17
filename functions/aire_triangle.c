#include "../headers/aire_triangle.h"

double aire_triangle(double a, double b, double c) {
  double p = produit(division(1, 2), perimetre_triangle(a, b, c));
  double s1 = soustraction(p, a);
  double s2 = soustraction(p, b);
  double s3 = soustraction(p, c);

  return sqrt(produit(produit(p, s1), produit(s2, s3)));
}
