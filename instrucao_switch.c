#include <stdio.h>

/*
	Usamos o switch em caso onde tenhhamos uma
	estrutura de grande ou confusa de if/else if/else
*/

int main(){

	int valor;

	printf("Digite um valor de 1-7: ");
	scanf("%d", &valor);

	switch(valor){
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda\n");
			break;
		case 3:
			printf("Terça\n");
			break;
		case 4:
			printf("Quarta\n");
			break;
		case 5:
			printf("Quinta\n");
			break;
		case 6:
			printf("Sexta\n");
			break;
		case 7:
			printf("Sábado\n");
			break;
		default:
			printf("Valor Inválido");
	}

	return 0;
}
