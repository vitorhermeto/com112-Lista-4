#include <stdio.h>
#include <stdlib.h>
#include "com112_sort.h"

int menu(){
	int valor;
	do{
		printf("\nEscolha dentre as opcoes: \n 1-Bubble Sort \n 2-Selection Sort \n 3-Insertion Sort \n 0-Sair do menu \n Valor: ");
		scanf("%d", &valor);
		printf("\n");
		
		switch ( valor ){
		case 0 : break;
		
	    case 1 :
	    printf ("Domingo\n");
	    break;
	    
	    case 2 :
	    printf ("Segunda\n");
	    break;
	    
	    case 3 :
	    printf ("Terca\n");
	    
	    default :
	    printf ("Valor invalido!\n");
		}
		if(valor!=0){
			system("pause");
		}
	} while (valor != 0);
	
	return 0;
}

int relatorio(){
}

int main(){	
	FILE *file;
	file = fopen("com112_entrada.txt", "w");

	menu();
	
	printf("fim");
	
	return 0;
	
}

