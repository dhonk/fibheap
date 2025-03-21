#include <stdio.h>
#include <stdlib.h>

// Implementing a standard binary heap
// wait how do i do this again
// okie fixed size it is sobsob

typedef struct heap_obj {
	int *array;
	int size;
	int cap;
} heap_obj;

typedef struct heap_obj* heap;

heap make_heap (int n) {
	heap h = (heap) calloc (1, sizeof (heap_obj));
	printf ("making heap with size %d\n", n); 
	h->array = (int *) calloc (n, sizeof (int));
	h->size = 0;
	h->cap = n;
	return h;
}

int get_size (heap h) {
	return h->size;
}

int get_cap (heap h) {
	return h->cap;
}

// print as array
void print_heap (heap h) {
	printf ("[");
	for (int i = 0; i < get_size (h) - 1; i++) {
		printf ("%d, ", h->array[i]);
	}
	printf ("%d]\n", h->array[get_size (h) - 1]);
}

// print as tree representation
// idk lets do this later UmU
/*
void print_heap_t (heap h) {
	
}
*/

void free_heap (heap *h) {
	if (h != NULL && *h != NULL) {
		free (*h);
	}
}

// maintain heap property
void heapify (heap h) {
	(void)h;	
}

int main (void) {
	printf ("ur mom\n");
	heap h = make_heap (8);
	// just to check printing
	h->size = 8;
	print_heap (h);

	free_heap (&h);
	
	return 0;
}

