#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_TAM 1000

void insertsort(int n, int x[]){
		int i, k,y;
		for(k=1;k<n;k++){
			y= x[k];
			for(i=k-1;i>=0 && y<x[i];i--)
				x[i+1] = x[i];
			x[i+1]	= y;
		}
	}

int main(){
	int i, n;
	int vetor[10]={1,7,9,5,6,8,4,3,2,0};
	
	n=10;
	
	printf("desordenado\n");
     for(i=0;i<n;i++){	 
      printf("Vetor[%2d]: %d\n",i+1,vetor[i]);
}
	insertsort(n, vetor);
	
	 
	
	printf("Vetor ordenado...\n");
	   for(i=0;i<n;i++){ 
      printf("Vetor[%2d]: %d\n",i+1,vetor[i]);
  // printf("Trocas efetuadas: %3d\n\n",);
 }
 
}
