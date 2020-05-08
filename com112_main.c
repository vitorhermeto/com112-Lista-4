#include <stdio.h>
#include <stdlib.h>
#include "com112_sort.h"
#include "com112_file.h"
#include <time.h>

int menu (){
	int op;
		printf("\n");
		printf("\nEscolha dentre as opcoes: \n 1-Bubble Sort \n 2-Selection Sort \n 3-Insertion Sort \n opcao: ");
		scanf("%d", &op);
		printf("\n");
	
	return op;
}

int relatorio(float tempo, int comp, int mov, int *vetor, int n){
	int j;
	printf(" 1. Tempo de execucao em segundos: %f \n 2. Numero de comparacoes entre elementos do vetor: %d \n 3. Numero de movimentacoes entre elementos do vetor: %d \n", tempo, comp, mov);
	printf("\n");
}

int main(){
	LimparArquivos();
	int n, i, op2=1, op;
	float tempo;
    time_t t_ini, t_fim;
    do{
		printf("Entre com a quantidade de algarismos a serem ordenados: ");
		scanf("%d",&n);
		EscreverArquivoRelatorio1(n);	
		int vet[n], vetaux[n];
		for (i=0;i<n;i++){
			vet[i]=rand() % 100;
		}
		EscreverArquivoEntrada(vet,n);
		for(i=0;i<n;i++){
			vetaux[i]=vet[i];
		}
		do{	
			int comp=0, mov=0;
			for(i=0;i<n;i++){
			vet[i]=vetaux[i];
			}
			op=menu();
			switch ( op ){
			    case 1 :
			    t_ini=time(NULL);
			    bubble_sort(vet, n, &comp, &mov);
			    t_fim=time(NULL);
	   			tempo=difftime(t_fim, t_ini);
			    break;
			    
			    case 2 :
			    t_ini=time(NULL);
			    selection_sort(vet, n, &comp, &mov);
			    t_fim=time(NULL);
	   			tempo=difftime(t_fim, t_ini);
			    break;
			    
			    case 3 :
			    t_ini=time(NULL);
			    insertionSort(vet, n, &comp, &mov);
			    t_fim=time(NULL);
	   			tempo=difftime(t_fim, t_ini);
			    break;
			    
			    default :
	   			printf ("Valor invalido!\n");
			}

			EscreverArquivoRelatorio2(op, tempo, comp, mov);
			printf("\n");
			relatorio(tempo, comp, mov, vet, n);

			printf("\n Caso deseje testar outro vetor, digite 2 \n Caso deseje testar outro metodo, digite 1 \n Caso deseje finalizar o programa, digite 0 \n Opcao:");
			scanf("%d",&op2);
		}while (op2 == 1 && op2 !=0 );
	EscreverArquivoSaida(vet, n);
	}while (op2 != 0);

	printf("\nFim do programa \nOs aquivos criados serao limpos apos a reinicializacao do programa");

	return 0;
	
}

