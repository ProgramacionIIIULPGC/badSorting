#include "obtenciondatos.h"
#include "compvect.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void printDatos( int tam[],int  n, float timeDesc[] , float timeRandom[]);

int main(int argc, char **argv){
	bool debug = false;
	int tam [] = { 1, 2, 4, 8, 16, 32};
	int n = 6;
	float timeDesc [n];
	float timeRandom [n];
	int multiplier = 1000;
	printf("\nBad Sorting, a (very) bad way to order arrays. \n\n" );
	printf("Use $./badOrdering debug to use a minor set. \n" );
	for (int i = 0; i < argc; ++i){

        if( strcmp("debug", argv[i]) == 0){
        	debug = true;
        }
    }

	if(!debug){
		printf("Preparing the basic array, a set 1000-32000 will be used...\n\n");
		for (int i = 0; i < n; ++i){
			tam[i] = tam[i]*multiplier;
		}
	}else{
		printf("Debug is on, a set 1-32 will be used.\n");

	}
	obtencionDatos( tam, n, timeDesc , timeRandom);
	printDatos( tam, n, timeDesc , timeRandom);

	return 0;
}
void printDatos( int tam[],int  n, float timeDesc[] , float timeRandom[]){
	printf("Vector Size\tVector time in desc order\tVector ordering time random order\n" );
	for (int i = 0; i < n; ++i){

		printf("%d\t\t %f\t\t\t%f\n", tam[i], timeDesc[i], timeRandom[i] );
	}
}
