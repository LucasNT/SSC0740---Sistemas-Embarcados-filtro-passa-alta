#include <stdio.h>
#include <stdlib.h>
#include "myUtils.h"

#define QTD_FILES 4

int main (int argc , char* argv[]){
	FILE *fd = fopen(argv[1], "r");
	free(getLinha(fd));
	free(getLinha(fd));
	free(getLinha(fd));
	free(getLinha(fd));
	FILE *outputs[QTD_FILES];
	for(int i  = 0  ; i  < QTD_FILES ; i++){
		char aux[10];
		sprintf(aux , "arq0%d.txt" , i);
		outputs[i] = fopen(aux, "w");
	}
	unsigned char aux;

	for (int j = 0; j < QTD_FILES ;j++){
		FILE * output = outputs[j];
		for (int i = 0 ; i < (320 * 240) / QTD_FILES; i++){
			fread(&aux , 1 ,  1 , fd);
			fprintf(output , "%d\n" , aux);
		}
	}

	for(int i  = 0  ; i  < QTD_FILES ; i++){
		fclose(outputs[i]);
	}

	return 0;
}
