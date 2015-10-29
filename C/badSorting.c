#include <stdio.h>

void printArray(int [], int );
void swap(int*, int*);

int main(){
	/* example vector:*/

	int length = 10;
	
	int a [] = {1,2,1,3,4,5,3,8,5,1};

	int i,j;

	int iMin;

	/* advance the position through the entire array */
	/*   (could do j < n-1 because single element is also min element) */
	for (j = 0; j < length-1; j++) {
	    /* find the min element in the unsorted a[j .. n-1] */

	    /* assume the min is the first element */
	    iMin = j;
	    /* test against elements after j to find the smallest */
	    for ( i = j+1; i < length; i++) {
	        /* if this element is less, then it is the new minimum */
	        if (a[i] < a[iMin]) {
	            /* found new minimum; remember its index */
	            iMin = i;
	        }
	    }

	    if(iMin != j) {
	        swap(&a[j], &a[iMin]);
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