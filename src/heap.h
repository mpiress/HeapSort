#ifndef HEAP_H 
#define HEAP_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 10


typedef struct Vector Vector;

struct Vector{
	int *itens;
};

void Initialize(Vector *v);
void Imprime(Vector *v, int right);
void Swap(int *a, int *b);

void RebuildHeap(Vector *v, int left, int right);
void BuildHeap(Vector *v);
void HeapSort(Vector *v);

#endif