//TAREA 22. PROGRAMA EJEMPLO 1

#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

	int main(int argc, char const*argv[]){
	  appInfoData("Ejemplo de Punteros 1", "13/11/2017");

	  int a;
	  a=10;
	  int *puntero;
	  puntero=&a;

	  printf("%d\n", *puntero);

	  return 0;
}


