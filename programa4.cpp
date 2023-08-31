#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void alteraValor(int n) {
	n=10;
}

void alteraReferencia(int *n) {
	*n=10;
}

main(){
	int n=20;
	printf("\nValor de n antes da chamada da funcao por valor: %d",n);
	alteraValor(n);
	printf("\nValor de n apos a chamada da funcao por valor: %d",n);
	printf("\nValor de n antes da chamada da funcao por referencia: %d",n);
	alteraReferencia(&n);
	printf("\nValor de n apos a chamada da funcao por referencia: %d",n);
	
}
