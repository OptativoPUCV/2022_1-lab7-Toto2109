#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){

   if (pq -> size != 0){
      return pq ->heapArray[0].data;
   }

    return NULL;
}



void heap_push(Heap* pq, void* data, int priority){

   if(pq -> capac == pq -> size || pq -> size ){
      pq -> capac = (2 * pq -> capac) + 1;
      pq -> heapArray = (heapElem*) realloc (pq -> heapArray, pq -> capac * sizeof(heapElem));
   }

   pq -> heapArray[pq -> size].data = data;
	pq -> heapArray[pq -> size].priority = priority;


}


void heap_pop(Heap* pq){

}

Heap* createHeap(){

   Heap *new = (Heap*)malloc(sizeof(Heap));
   if (new == NULL) return NULL;
   new -> size = 0;
   new -> capac = 3;
   new -> heapArray = (heapElem*)malloc(new -> capac*sizeof(heapElem));



   return new;
}
