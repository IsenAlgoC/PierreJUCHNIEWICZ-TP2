#include <stdlib.h>
#include <stdio.h>

int main() {
	int annee = 0;
	int bissextile;
	printf("Saisissez une annee : ");
	scanf_s("%d", &annee);
	while (annee > 10000) {
		printf("L'annee saisie est trop grande, veuillez ressaisir une annee inferieure a 10 000 : ");
		scanf_s("%d", &annee);
	}
	printf("\nL'annee saisie est : %d\n", annee);

	//En utilisant des if...else imbriqués 
	if (annee % 400 == 0) {
		bissextile = 1;
	}
	else if (annee % 100 == 0) {
		bissextile = 0;
	}
	else if (annee % 4 == 0) {
		bissextile = 1;
	}
	else {
		bissextile = 0;
	}
	if (bissextile) {
		printf("\nL'annee %d est bissextile\n", annee);
	}
	else {
		printf("\nL'annee %d n'est pas bissextile\n", annee);
	}

	//En utilisant une seule expression logique
	if ((annee % 400 == 0) || (annee % 4 == 0 && annee % 100 != 0)) {
		printf("\nL'annee %d est bissextile !\n", annee);
	}
	else {
		printf("\nL'annee %d n'est pas bissextile !\n", annee);
	}
}

