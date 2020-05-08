#include <stdio.h>
#include <stdlib.h>
#include "com112_sort.h"

void bubble_sort (int *vetor, int n, int *comp, int *mov) {
    int k, j, aux;
    for (k = n - 1; k > 0; k--) {

        for (j = 0; j < k; j++) {
            *comp=*comp+1;
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
                *mov=*mov+1;
            }
        }
    }
}

void selection_sort (int *vetor,int n, int *comp, int *mov) {
  	int i, j, min, aux;
  	for (i = 0; i < (n - 1); i++) {
    	min = i;
    	for (j = i+1; j < n; j++) {
    		*comp=*comp+1;
	      	if (vetor[j] < vetor[min]) {
	      		*mov=*mov+1;
	   			min = j;
      		}
    	}
	    if (i != min) {
	      	aux = vetor[i];
	      	vetor[i] = vetor[min];
	      	vetor[min] = aux;
	    }
	}
}

void insertionSort(int *vetor, int n, int *comp, int *mov) {
    int i, j, tmp;
    for (i = 1; i < n; i++) {
        j = i;
        if(vetor[j-1]<vetor[j]){
            *comp=*comp+1;
		}
        while (j > 0 && vetor[j - 1] > vetor[j]){
        	*comp=*comp+1;
        	*mov=*mov+1;
            tmp = vetor[j];
            vetor[j] = vetor[j - 1];
            vetor[j - 1] = tmp;
            j--;
        }
    }
}
 


