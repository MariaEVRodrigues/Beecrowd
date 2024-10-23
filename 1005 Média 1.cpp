#include <stdio.h>

int main () {
	
	double a, b, nota1, nota2;
	
	scanf("%lf %lf", &a, &b); //Entrada da nota com uma casa decimal.
	
	nota1 = a * 3.5; //Multiplicação da nota pelos seus pesos
	nota2 = b * 7.5;
	
	printf("MEDIA = %.5lf\n", (nota1 + nota2)/11); //Cálculo e impressão da média;
	
	return 0;
}
