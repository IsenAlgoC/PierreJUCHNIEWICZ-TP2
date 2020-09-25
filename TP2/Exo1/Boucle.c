#include <stdio.h>
#include <stdlib.h>

void boucleFor(int n) {

	unsigned short valSommeFor = 0;			//valeur de la somme de la boucle for

	for (int i = 1; i <= n; ++i) {
		valSommeFor = valSommeFor + i;
	}
	printf("Votre somme de votre boucle for est : %d pour les %d premiers entiers positifs !\n", valSommeFor, n);
}

void boucleWhile(int n) {

	unsigned short valSommeWhile = 0;			//valeur de la somme de la boucle while
	int compteurWhile = 1;

	while (compteurWhile <= n) {
		valSommeWhile = valSommeWhile + compteurWhile;
		++compteurWhile;
	}

	printf("Votre somme de votre boucle while est : %d pour les %d premiers entiers positifs !\n", valSommeWhile, n);

}

void boucleDoWhile(int n) {

	unsigned short valSommeDoWhile = 0;		//valeur de la somme de la bouche DoWhile
	int compteurDoWhile = 1;

	do {
		valSommeDoWhile = valSommeDoWhile + compteurDoWhile;
		compteurDoWhile++;
	} while (compteurDoWhile < n + 1);

	printf("Votre somme de votre boucle do/while est : %d pour les %d premiers entiers positifs !\n", valSommeDoWhile, n);
}

void valeurAvantDepassement() {
	int sommemax = 0;
	int i = 0;
	int exit = 0;
	while (exit == 0) {
		i++;
		sommemax = sommemax + i;
		if (sommemax + i >= 65535) {
			65535 - sommemax <= i;
			exit = 1;
		}
	}
	printf("\nLa valeur max de n avant depassement unsigned short est : %d \n", i);
}

int main() {
	int recommencer = 1;
	while (recommencer) {
		int n;
		printf("Saisissez votre valeur de n : ");
		scanf_s("%d", &n);
		if (n <= 361) {
			printf("\nVous avez saisi n = %d\n", n);
			// Utilisation des 3 boucles
			boucleFor(n);
			boucleWhile(n);
			boucleDoWhile(n);
			valeurAvantDepassement();
			recommencer = 0;
		}
		else {
			printf("\nLa valeur saisie n'est pas correcte\nRe-");
		}
	}
}

// La somme est représentée par une variable de type unsigned short int, quelle est la valeur maximum de n pour que la variable représentant la somme ait une valeur correcte ?
// --> Réponse : la valeur maximum d'un unsigned short est 65 535, or, si n = 361, nous avons comme résultat de somme 65 341, dernier nombre possible avant dépassement, donc nous devons rentrer un n <= 361.