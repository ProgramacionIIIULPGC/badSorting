#include <stdio.h>

void printArray(int [], int );
void swap(int*, int*);

int main(){
	/* example vector:*/

	int length = 10;
	
	int a [] = {1,2,1,3,4,5,3,8,5,1};

	int i,j;

	int min;
	int count;

    count = 0;
    min = 0;
	/* advance the position through the entire array */
	/*   (could do j < n-1 because single element is also min element) */
	for (i = 0; i < length; i++) {
	    /* find the min element in the unsorted a[j .. n-1] */

	    /* assume the min is the first element */
	    count = min;
	    /* test against elements after j to find the smallest */
	    for ( j = min; j < length; j++) {
	        /* if this element is less, then it is the new minimum */
	        if (a[i] <= a[j]) {
	            /* found new minimum; remember its index */
	            count++;
	        }
	    }

	    if(count == length) {
	        swap(&a[i], &a[min]);
	        i=min;
	        min++;
	    }

	}

	printArray( a, length);
	return 0;
}

void printArray( arrayToPrint [] ,  length){

	/* print array */

	for (int i = 0; i < length; ++i){

		printf("%d\n", arrayToPrint[i] );
	}
}

void swap(int *a, int *b){
	/* swap array elements by reference */
   int temp;
 
   temp = *b;
   *b   = *a;
   *a   = temp;   
}