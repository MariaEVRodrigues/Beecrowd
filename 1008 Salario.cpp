#include <stdio.h>

int main () {
	
	float valorHora, salario;
	int numero, horas; //Duas vari�veis de n�mero inteiro.
	
	scanf ("%d %d %f", &numero, &horas, &valorHora);
	
	salario = horas * valorHora; //Calcular o sal�rio.
	
	printf ("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);
	
	return 0;
}
