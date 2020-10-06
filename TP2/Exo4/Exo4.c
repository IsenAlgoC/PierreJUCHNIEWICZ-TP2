#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	int limiteSup = 0;
	int propositionTorF = 1;
	printf("Choisissez une limite (plus le nombre est eleve, plus la difficulte est grande !) : ");
	scanf_s("%d", &limiteSup);
	srand((unsigned)time(NULL));
	int n = rand() %limiteSup;
	while (propositionTorF) {
		printf("\nSaisissez votre proposition : ");
		int proposition = 0;
		scanf_s("%d", &proposition);
			if (proposition < n) {
				printf("\nVotre proposition est trop petite !\n");
			}
			else if (proposition > n) {
				printf("\nVotre proposition est trop grande !\n");
			}
			if (proposition == n) {
				printf("\nVous avez trouve la bonne valeur !!!\n");
				propositionTorF = 0;
			}
	}
	return(EXIT_SUCCESS);
}
