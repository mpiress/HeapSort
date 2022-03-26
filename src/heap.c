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


// vet, 2, 6
void RebuildHeap(Vector *v, int left, int right){
	int i = left; // 2
	int child = (2*i) + 1; //5
	
	while(child+1 < right){
		if(v->itens[child] < v->itens[child+1])
			child = child + 1;
		if (v->itens[i] < v->itens[child])
			Swap(&v->itens[i], &v->itens[child]);
		i = child;
		child = (2 * i) + 1;
	}
}

void BuildHeap(Vector *v){
	int left = (MAXSIZE/2); // [6, 2, 3, 4, x, x]
	while(left > 0){
		left = left - 1; // 2
		RebuildHeap(v, left, MAXSIZE);
	}
}


void HeapSort(Vector *v){
	int left, right;
	
	BuildHeap(v);

	left = 0;
	right = MAXSIZE-1;
	while(right > 0){
		Swap(&v->itens[0], &v->itens[right]);
		Imprime(v, right);
		RebuildHeap(v, left, right);
		right = right - 1;

	}
}













