#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book {
	int number;
	char title[20]; // changed
};

int main(void) {
	struct Book*p;
	
	p = (struct Book*)malloc(2*sizeof(struct Book));
	
	if(p == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return 1; // for error
	}
	
	p->number = 1;
	strcpy(p->title, "Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	free(p);
	return 0; // for success
}
