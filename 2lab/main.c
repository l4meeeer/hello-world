#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*#include "bstree.h"
#include "hashtab.h"*/

int main()
{
	//bstree *a[];
	int n = 0;
	//int k = 10, tree, w, time;
	FILE *book = fopen("book.txt", "r");
	while (!feof(book)) {
		if (fgetc(book) == '\n') {
			//a[]->key = k;
			n++;
			//k += 10;
		}
	}
	printf("%d", n);
	fclose(book);
	
	return 0;
}