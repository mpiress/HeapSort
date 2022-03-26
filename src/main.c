#include "heap.h"

int main(){
	
	Vector v;
	
	Initialize(&v);
	Imprime(&v, MAXSIZE);
	printf("\n");
	HeapSort(&v);
	
	return 0;
}
