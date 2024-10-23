#include <stdio.h>

int main () {
	
	int a, b, c, d, diferenca; //Ler quatro valores inteiros.
	
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	
	diferenca = (a * b - c * d); //Fórmula informada
	 
	printf ("DIFERENCA = %d\n", diferenca);
	
	return 0;
}
