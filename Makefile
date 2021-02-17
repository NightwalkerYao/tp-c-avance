.SILENT: sigl main somme soustraction division produit aire_triangle aire_rectangle perimetre_triangle

sigl: main somme soustraction produit division perimetre_triangle aire_triangle aire_rectangle
	gcc -o sigl main.o somme.o soustraction.o produit.o division.o perimetre_triangle.o aire_triangle.o aire_rectangle.o -lm;\
	rm *.o;\
	echo "Terminé !"

somme:
	gcc -o somme.o -c "./functions/somme.c"

soustraction:
	gcc -o soustraction.o -c "./functions/soustraction.c"

produit:
	gcc -o produit.o -c "./functions/produit.c"

division:
	gcc -o division.o -c "./functions/division.c"

aire_triangle:
	gcc -o aire_triangle.o -c "./functions/aire_triangle.c"

aire_rectangle:
	gcc -o aire_rectangle.o -c "./functions/aire_rectangle.c"

perimetre_triangle:
	gcc -o perimetre_triangle.o -c "./functions/perimetre_triangle.c"

main:
	(ls main.o >> /dev/null 2>&1 && rm *.o) || echo "Compilation en cours..."
	gcc -o main.o -c main.c
