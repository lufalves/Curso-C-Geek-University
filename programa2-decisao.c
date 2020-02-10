// Estruturas de Decisão - if, else if e else

#include <stdio.h>

int main(){

	int idade;

	printf ("Qual sua idade? ");
	scanf ("%d", &idade);

	if(idade < 18){
		printf("Você é menor de idade!\n");
	} else if (idade >= 18 && idade < 60){
		printf("Você é adulto\n");
	} else{
		printf("Você é idoso\n");
	}

	printf("Sua idade é %d", idade);

	return 0;
}
