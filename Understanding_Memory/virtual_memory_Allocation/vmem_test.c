#include <stdio.h>
#include <unistd.h>

int global_var = 42;

int main(){
	int local_var = 10;
	printf("main()	address: %p\n",(void *)main);
	printf("global_var	address: %p\n",(void *)&global_var);
	printf("local_var	address: %p\n",(void *)&local_var);
	printf("Waiting for the input to exit ..........");
	getchar();

	return 0;
}
