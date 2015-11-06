#include <stdio.h>
#include "metodo.h"
#include <time.h>

void metodo( int vec[], int n, float *tiempo){
	/* example vector:*/

	int length = n;
	int i,j;
	int min;
	int count;

	clock_t begin, end;
	double time_spent;

    count = 0;
    min = 0;
    begin = clock();
	/* advance the position through the entire array */
	/*   (could do j < n-1 because single element is also min element) */
	for (i = 0; i < length; i++) {
	    /* find the min element in the unsorted a[j .. n-1] */

	    /* assume the min is the first element */
	    count = min;
	    /* test against elements after j to find the smallest */
	    for ( j = min; j < length; j++) {
	        /* if this element is less, then it is the new minimum */
	        if (vec[i] <= vec[j]) {
	            /* found new minimum; remember its index */
	            count++;
	        }
	    }

	    if(count == length) {
	        swap(&vec[i], &vec[min]);
	        i=min;
	        min++;
	    }

	}

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	*tiempo = (float) time_spent;
}


void swap(int *a, int *b){
	/* swap array elements by reference */
   int temp;
 
   temp = *b;
   *b   = *a;
   *a   = temp;   
}