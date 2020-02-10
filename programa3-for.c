#include<stdio.h>
//Estruturas de repetição for

//for: Utilizado quando se sabe o critério de parada

/* Problema
Faça um programa no qual receba 5
numeros inteiros e apresente a soma no final

 */

int main(){

	int numero, soma = 0;

	for(int i = 0;i <5; i++){

		printf("Informe um número: ");
		scanf("%d", &numero);

		soma = soma + numero;
	}

	printf("A soma é %d", soma);

	return 0;
}
