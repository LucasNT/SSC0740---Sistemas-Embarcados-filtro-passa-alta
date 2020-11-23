#include <stdio.h>
#include <stdlib.h>
#include "myUtils.h"


char* getLinha(FILE *F){
	char* linha;
	char c;
	int resu;
	int cont ,lim;
	cont = lim = 0;
	linha = NULL;
	c = 0;
	do{
		lim += 20;
		linha = realloc(linha , sizeof(char)*lim);
		if(linha == NULL)
			return NULL;
		do{
			resu = fscanf(F,"%c",&c);
			resu = (resu != EOF) && (c != '\r') && (c != '\n');
			*(linha+cont) = c;
			cont++;
		}while(resu && lim > cont);
	}while(resu);
	if(c == '\r'){
		fscanf(F,"%*c");
	}

	*(linha + cont-1) = '\0';
	return linha;
}
