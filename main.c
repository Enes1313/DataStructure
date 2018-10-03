/*
 ============================================================================
 Name        : DataStructure4C.c
 Author      : Enes
 Version     : -
 Copyright   : -
 Description : Data Structure for C (Standard : C99)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dataStructure.h"

int main(void)
{
	DynamicArray dynamicArray;
	DataFuncsPointers funcs = {sizeof(int), free, malloc, memcpy, memcmp};

	dtDynamicArrayInit(&dynamicArray, funcs);

	srand(time(NULL));

	for(int x, i = 1; i < 5; i++)
	{
		printf("DynamicArray'e ekleniyor : %d sayisi eklendi\n", x = rand() % 50);
		dtDynamicArrayAdd(&dynamicArray, &x);
	}

	for(int x, i = 1; i < 5; i++)
	{
		dtDynamicArrayGetFrom(&dynamicArray, &x, i);
		printf("DynamicArray'den al�n�yor : %d. eleman %d\n", i, x);
	}

	printf("DynamicArray's�ralan�yor...\n");
	dtDynamicArraySort(&dynamicArray);

	for(int x, i = 1; i < 5; i++)
	{
		dtDynamicArrayGetFrom(&dynamicArray, &x, i);
		printf("DynamicArray'den al�n�yor : %d. eleman %d\n", i, x);
	}
	dtDynamicArrayClear(&dynamicArray);

	return EXIT_SUCCESS;
}
