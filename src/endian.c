/*
   This file contains functions to check the machines's endian:little or big
*/

#include <stdio.h>

typedef union {
	unsigned short int a;
	char b[2];
}endian;

void check_endian()
{
	endian test;

	test.a = 0x0001;

	if(a[0] = 0x01)
		printf("little endian\n");
	else
		printf("big endian\n");

	return;
}
