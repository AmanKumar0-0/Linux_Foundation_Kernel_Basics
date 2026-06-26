#include <stdio.h>

int counter = 100;

void print(){
	printf("[file] counter = %d, address = %p\n",counter,(void *)&counter);
}
