#include "heap.h"


void Initialize(Vector *v){
	
	//Porque 42? Leia o guia definitivo do mochileiro das galáxias :).
	srand(42); 
    
    v->itens = (int*)malloc(MAXSIZE*sizeof(int));
	for(int i=0; i<MAXSIZE; i++)
		v->itens[i] = rand()%100;
}

void Swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void Imprime(Vector *v, int right){
	printf("RIGHT(%d)\t", right);
	for(int i=0; i<MAXSIZE; i++)
		printf("%d\t", v->itens[i]);
	printf("\n");
}


void RebuildHeap(Vector *v, int left){
	int i = left;
	int child = (left > 0)?(i*2):1;

	if((child+1 < MAXSIZE) && (v->itens[child] < v->itens[child+1]))
		child = child + 1;
	if (v->itens[i] < v->itens[child])
		Swap(&v->itens[i], &v->itens[child]);
	
}

void BuildHeap(Vector *v, int right){
	int left = (right/2);
	while(left > 0){
		left = left - 1; 
		RebuildHeap(v, left);
	}
}


void HeapSort(Vector *v){
	int left = 0;
	int right = MAXSIZE;

	while(right > 0){
		right = right - 1;
		BuildHeap(v, right);
		Swap(&v->itens[left], &v->itens[right]);
		Imprime(v, right);
	}
	
}













