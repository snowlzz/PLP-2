#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

struct funcionario {
	int codigo;
	char nome[50];
	char cargo[50];
	float salario;
};

main(){
	struct funcionario a,b,*pc;
	a.codigo=10;
	strcpy(a.nome,"Paulo Daniel");
	strcpy(a.cargo,"Programador");
	a.salario=9423.15;
	printf("\nCodigo: %d",a.codigo);
	printf("\nNome: %s",a.nome);
	printf("\nCargo: %s",a.cargo);
	printf("\nSalario: %.2f",a.salario);
	printf("\n\nInforme o valor do codigo: ");
	scanf("%d",&b.codigo);
	fflush(stdin);
	printf("\nInforme o nome: ");
	gets(b.nome);
	printf("\nInforme o cargo: ");
	gets(b.cargo);
	printf("\nInforme o salario: ");
	scanf("%f",&b.salario);
	pc=&b;
	// podemos acessar o conteudo de uma estrutura a partir do ponteiro
	// utilizando ->
	printf("\nCodigo informado: %d",pc->codigo);
	printf("\nNome informado: %s", pc->nome);
	printf("\nCargo informado: %s",pc->cargo);
	printf("\nSalario informado: %f",pc->salario);
	// alocacao dinamica para o ponteiro pc
	pc=(struct funcionario *) malloc(sizeof(struct funcionario));
	pc->codigo = a.codigo;
	strcpy(pc->nome,a.nome);
	strcpy(pc->cargo,a.cargo);
	pc->salario = a.salario;
	printf("\nInforme o codigo: ");
	scanf("%d",&(*pc).codigo);
	
}
