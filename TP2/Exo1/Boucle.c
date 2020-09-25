#include <stdio.h>
#include <stdlib.h>

int main() {
	// Initialisation des variables
	int n = 100;
	int compteurWhile = 2;
	int compteurDoWhile = 2;
	int valSommeFor = 0;			//valeur de la somme de la boucle for
	int valSommeWhile = 0;			//valeur de la somme de la boucle while
	int valSommeDoWhile = 0;		//valeur de la somme de la bouche DoWhile

	// Utilisation des 3 boucles différentes

	for (int i = 2; i <= n; ++i) {
		valSommeFor = valSommeFor + i;
	}
	while (compteurWhile <= 100) {
		valSommeWhile = valSommeWhile + compteurWhile;
		++compteurWhile;
	}
	do {
		++compteurDoWhile;
		valSommeDoWhile = valSommeDoWhile + compteurDoWhile;
	} while (compteurDoWhile <= 100);

	// Affichage des résultats des 3 boucles

	printf("Votre somme de votre boucle for est : %d pour les %d premiers entiers positifs !\n", valSommeFor, n);
	printf("Votre somme de votre boucle while est : %d pour les %d premiers entiers positifs !\n", valSommeWhile, n);
	printf("Votre somme de votre boucle do/while est : %d pour les %d premiers entiers positifs !\n", valSommeDoWhile, n);
	system("PAUSE");
	return 0;
}

