#include <stdio.h>

int main () {
	
	double a, b, c, media;
	
	scanf ("%lf %lf %lf", &a, &b, &c);
	
	media = (a * 2 + b * 3 + c * 5) / 10; //Cálculo da média
	
	printf ("MEDIA = %.1lf\n ", media); //Impressão da média com uma casa decimal
	
	return 0;
}
