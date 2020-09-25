#include <stdlib.h>
#include <stdio.h>
void ordonne(float *a, float *b, float *c) {
	if (b < a) {
		float tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
	}

	if (*c < *a) {
		float tmp;
		tmp = *a;
		*a = *c;
		*c = tmp;
	}

	if (*c < *b) {
		float tmp;
		tmp = *b;
		*b = *c;
		*c = tmp;
	}
}

void fonction() {
	printf("\nSaisissez vos dimensions :\n");
	float a = 0, b = 0, c = 0;


	printf("a = ");
	scanf_s("%f", &a);
	while ((a < 1) || (a > 150)) {
		printf("Changer de valeur pour a (elle doit etre entre 1 et 150) : a = ");
		scanf_s("%f", &a);
	}


	printf("\nb = ");
	scanf_s("%f", &b);
	while ((b < 1) || (b > 150)) {
		printf("Changer de valeur pour b (elle doit etre entre 1 et 150) : b = ");
		scanf_s("%f", &b);
	}


	printf("\nc = ");
	scanf_s("%f", &c);

	while ((c < 1) || (c > 150)) {
		printf("Changer de valeur pour c (elle doit etre entre 1 et 150) : c = ");
		scanf_s("%f", &c);
	}


	ordonne(&a, &b, &c);
	printf("\nVos dimensions sont %0.2f x %0.2f x %0.2f\n", a, b, c);
	if (a < 25 && b < 35 && c < 55) {
		printf("\nVALIDE\n");
	}
	else {
		printf("\nINVALIDE\n");
	}

}

int main() {
	int recommencer = 1;
	while (recommencer) {
		fonction();
		int choix;
		printf("\nVoulez vous recommencer 0 (oui) / 1 (non) ?");
		scanf_s("%d", &choix);
		if (choix == 1) {
			recommencer = 0;
		}
	}
}

