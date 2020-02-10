#include<stdio.h>
//Estrutura de Repetição do-while

/*do-while: Utiliza qnd nao se sabe o numero de elementos
		para parada e que a condição de parada é checada
		após a primeira execução.
*/

/* Problema
Faça um programa no qual receba somente
numeros inteiros até que o numero de entrada
seja 0 e apresente a soma no final

 */

int main(){

	int numero, soma = 0;

	do{

		printf("Informe um número: ");
		scanf("%d", &numero);

		soma = soma + numero;

	}while(numero != 0);

	printf("A soma é %d", soma);

	return 0;
}
