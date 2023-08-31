#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void checaImparPar(int n){
	if (n%2==0)
		goto par;
	else
		goto impar;
		
	par: 
		printf("O numero %d e par ",n);
		return;
	impar:
		printf("O numero %d e impar ",n);
}

void checaLoop(){
	int i=1;
	while(i<=10){
		printf("\nValor de i: %d ", i);
		if (i==5)
			goto fora;
			
		goto incrementa;
		
		dentro:
			printf("\nVoltando para o loop");
		incrementa:
			i++;
	}
	
	return;
	fora:
		i++;
		printf("\nValor de i fora: %d ",i);
		goto dentro;
}

main(){
	int num=10;
	checaImparPar(num);
	checaLoop();
}
