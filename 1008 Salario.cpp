#include <stdio.h>

int main () {
	
	float valorHora, salario;
	int numero, horas; //Duas variáveis de número inteiro.
	
	scanf ("%d %d %f", &numero, &horas, &valorHora);
	
	salario = horas * valorHora; //Calcular o salário.
	
	printf ("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);
	
	return 0;
}
