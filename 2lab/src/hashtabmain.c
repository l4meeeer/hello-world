#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
#include "hashtab.h"

#define HASHTAB_SIZE 10000
#define HASHTAB_MUL  10

double wtime() {
	struct timeval t;
	gettimeofday(&t, NULL);
	return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}

int getrand(int min, int max)
{
    return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}

int main()
{
	int n = 0, i = 0, j;
	srand(time(NULL));
	double time, alltime = 0;
	struct listnode *node;
	struct listnode *hashtab[HASHTAB_SIZE];
	while (!feof(book)) { //считает количество слов в книге
		if (fgetc(book) == '\n') {
			n++;
		}
	}
	char words[n][60], *w;
	FILE *book = fopen("book.txt", "r");
	for(n = 0; n < n; n++) {
		fgets(words[n], 60000, book);
	}
	fclose(book);
	hashtab_init(hashtab);
	for (i = 1; i < 200000; i++) {
		hashtab_add(hashtab, words[i % 51203], i);
		if (i % 10000 == 0) {
			for (j = 0; j < 10000000; j++) {
				w = words[rand() % n];
				time = wtime();
				node = hashtab_lookup(hashtab, w);
				//hashtab_delete(hashtab, w);
				time = wtime() - time;
        	 	alltime = alltime + time;
			}
        alltime = alltime / 10000000;
		printf("n = %d; Elapsed time: %.15f sec.\n", i, alltime);
		alltime = 0;
		}
	}
	
	return 0;
}
