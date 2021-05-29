#include <stdio.h>
#define MAX_ELEMENT 100000

typedef struct {
	int key;
}element;

typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}HeapType;

HeapType* create()
{
	return (HeapType*)malloc(sizeof(HeapType));
}

void init(HeapType* h)
{
	h->heap_size = 0;
}

void insert_max_heap(HeapType* h, element item)
{
	int i;
	i = ++(h->heap_size);

	while ((i != 1) && (item.key > h->heap[i / 2].key)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}

	h->heap[i] = item;
}

void delete_max_heap(HeapType* h)
{
	if (h->heap_size == 0) {
		printf("0\n");
		return;
	}

	int parent, child;
	element item, temp;

	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
	parent = 1;
	child = 2;
	while (child <= h->heap_size) {
		if ((child < h->heap_size) && (h->heap[child].key) < (h->heap[child + 1].key))
			child++;
		if (temp.key >= h->heap[child].key)
			break;

		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	printf("%d\n", item.key);
}

int main(void) {
	int n;
	scanf("%d", &n);

	HeapType* h;

	h = create();
	init(h);

	element* list = malloc(sizeof(int) * n);


	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i].key);
	}

	for (int i = 0; i < n; i++) {
		if (list[i].key == 0) {
			delete_max_heap(h);
		}
		else
			insert_max_heap(h, list[i]);
	}
	free(list);
	free(h);
	return 0;
}
