#include <stdlib.h>
#include "obtenciondatos.h"
#include "compvect.h"
#include "metodo.h"
#include <stdio.h>

void obtencionDatos( int vectorIterationTries[], int vectorIterationTriesLength, float timeDesc[], float timeRandom []){
	int i = 0;
	int size = 0;
	int *vector;
	float timeCounter;

	for( i=0 ; i< vectorIterationTriesLength; i++){
		//printf("Itaration number: %d\n", i );
		size = vectorIterationTries[i];
		vector = (int *)malloc(sizeof(int)*size);
		inicializaVector( vector, vectorIterationTries[i], 1);
		metodo( vector, vectorIterationTries[i], &timeCounter );
		compruebaVector( vector, vectorIterationTries[i]);
		timeDesc[i]= timeCounter;

		timeCounter = 0;
		inicializaVector( vector, vectorIterationTries[i], 2);
		metodo( vector, vectorIterationTries[i], &timeCounter );
		compruebaVector( vector, vectorIterationTries[i]);
		timeRandom[i]= timeCounter;

	}
	
	

}