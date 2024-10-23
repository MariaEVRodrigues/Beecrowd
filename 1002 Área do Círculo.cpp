#include <stdio.h>

int main () {
	
	double raio, p, area; //A entrada contém ponto flutuante de dupla precisão.
	
	scanf ("%lf", &raio);
	
	area = 3.14159 * (raio * raio); // fórmula para o cálculo de pi.
	
	printf ("A=%.4lf\n", area); // imprimir com 4 casas após o ponto decimal.
	
	return 0;
	
}
