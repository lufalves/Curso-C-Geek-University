#include<stdio.h>
//Estrutura de Repetição while

/*while: Utiliza qnd nao se sabe o numero de elementos
		para parada, mas que tenha um criterio para checar
		antes de iniciar o loop.
*/

/* Problema
Faça um programa no qual receba somente
numeros inteiros até que o numero de entrada
seja 0 e apresente a soma no final

 */

int main(){

	int numero, soma = 0;

	printf("Informe um número: ");
	scanf("%d", &numero);

	while(numero != 0){

		soma = soma + numero;
		printf("Informe um número: ");
		scanf("%d", &numero);

	}

	printf("A soma é %d", soma);

	return 0;
}
