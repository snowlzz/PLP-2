#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	int valor, media=0, maior, menor;
	int qtd=0;
	while (qtd<10){
		printf("Informe o valor: ");
		scanf("%d",&valor);
		if (qtd==0){
			maior=valor;
			menor=valor;
		}
		media = media + valor;
		if (valor > maior)
			maior=valor;
		
		if (valor < menor)
			menor=valor;
		qtd++;
	}
	media = media / 10;
	printf("\nValor da media: %d - Maior valor: %d - Menor Valor: %d",media,maior,menor);
}
