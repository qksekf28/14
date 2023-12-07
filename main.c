#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[10];
};

void main(void) {
	struct Book*p;

	p = (struct Book*)malloc(2*sizeof(struct Book));
	
	if(p == NULL) {
		printf("Memory allocate error¡¤u\n");
		return;
	}
	
	p->number = 1;
	strcpy(p->title, "C Programming");

	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	printf("Book 1: %d - %s\n", p->number, p->title);
    printf("Book 2: %d - %s\n", (p + 1)->number, (p + 1)->title);


	free(p);
	return;
}
