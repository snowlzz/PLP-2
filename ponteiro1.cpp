#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

main(){
	// um ponteiro na linguagem C eh uma variavel
	// que armazena enderecos de memoria
	// declaracao de variaveis convencionais:
	int a;
	float b;
	// declaracao de variaveis do tipo ponteiro:
	int *pa, *pc;
	float *pb;
	printf("\nInforme o valor de a: ");
	scanf("%d",&a);
	printf("\nInforme o valor de b: ");
	scanf("%f",&b);
	printf("\nValor de a: %d - Valor de b: %f",a,b);
	// atribuir o endereco de a para o ponteiro pa
	pa=&a;
	// atribuir o endereco de b para o ponteiro pb
	pb=&b;
	printf("\nValor de pa: %p - Valor de pb: %p",pa,pb);
	//mostrar o conteudo da variavel a atraves do ponteiro pa
	//mostrar o conteudo da variavel b atraves do ponteiro pb
	printf("\nValor de a por meio do ponteiro pa: %d",*pa);
	printf("\nValor de b por meio do ponteiro pb: %f",*pb);
	//podemos alocar dinamicamente memoria para um ponteiro
	//existe um funcao em C denominada de malloc
	pc = (int *) malloc(sizeof(int));
	*pc=180;
	printf("\nValor de pc: %p",pc);
	printf("\nValor do conteudo referenciado por pc: %d",*pc);
	
	
}
