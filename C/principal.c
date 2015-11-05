#include "obtenciondatos.h"
#include "compvect.h"

int main(){
	int tam [] = { 1000, 2000, 4000, 8000, 16000, 32000};
	int n = 6;
	float timeDesc [n];
	float timeRandom [n];
	obtencionDatos( tam, n, timeDesc , timeRandom);
	// printDatos( tam, n, timeDesc , timeRandom);

	return 0;
}
	// void printDatos( int tam,int  n, float timeDesc , float timeRandom){

	// }