/*
 *	intuito de fazer coisas uteis para os programas em C
 *
 *
 */


#ifndef __MY_UTILS_
#define __MY_UTILS_
#include <stdio.h>
/*
 * Pega uma linha inteira alloca a string e retorna um ponteiro para ela
 * Para se encontrar um \r,\n e EOF;
 *	Parametros
 *		FILE *F		-> arquivo em que vai ocorrer a leitura
 *
 *	retorno
 *		ponteiro para string
 *
 */
char* getLinha(FILE *F);

#endif
