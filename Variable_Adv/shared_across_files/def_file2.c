#include <stdio.h>

extern int counter;

void print(void);

int main(){
	printf("[file2] counter = %d, address = %p\n",counter,(void *)&counter);
	print();

	counter = 200;
	printf("[file2] after modification counter = %d, address = %p\n",counter,(void *)&counter);
	print();

	return 0;
}
