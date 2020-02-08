#include <stdio.h>

//exercicio 1
int main(){

	float n1, n2;

	printf("Digite um número: ");
	scanf("%f", &n1);
	printf("Digite outro número: ");
	scanf("%f", &n2);

	if(n1 > n2){
		printf("%.2f é maior que %.2f",n1,n2);
	} else if (n1 == n2){
		printf("%.2f é igual a %.2f",n1,n2);
	} else{
		printf("%.2f é maior que %.2f",n2,n1);
	}

	return 0;
}
