#include <stdio.h>

int main () {
	
	double raio, p, area; //A entrada cont�m ponto flutuante de dupla precis�o.
	
	scanf ("%lf", &raio);
	
	area = 3.14159 * (raio * raio); // f�rmula para o c�lculo de pi.
	
	printf ("A=%.4lf\n", area); // imprimir com 4 casas ap�s o ponto decimal.
	
	return 0;
	
}
