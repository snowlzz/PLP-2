#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

/* void funcaoLoop(){
    
    int i = 1;
    int j;
    while (i<=10){
        j=1;
        printf("Valor de i: %d\n",i);
        printf("Valores de j: \n");
        while (j<=i){
            printf("%d ",j);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    printf("\nFim da funcao");
}
main() {
    
    funcaoLoop();
}
*/ 
void funcaoLoop(){
	int i = 1;
	int j;
	
	loop_i:
		if(i<=10){
			j=1;
			printf("valor de i: %d\n", i);
			printf("Valores de j: \n");
		
		loop_j:
			if(j <= i){
				printf("%d ",j);
            	j=j+1;
            	
            	goto loop_j;
				
			}
			printf("\n");
        	i=i+1;
        	
        	goto loop_i;
    } 
}

main(){
	funcaoLoop();
}
  // Reescrever a função fucaoLoop() substituindo os comandos de repetição por goto.

