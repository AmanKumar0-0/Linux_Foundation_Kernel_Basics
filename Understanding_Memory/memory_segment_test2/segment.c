#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int global_initialized = 100;		/* DATA Segment */
int global_uninitialized;		/* BSS Segment */
const char *str_literal = "hello";	/* Text Segment (read-only) */

int main(){
	int stack_var = 42;		/* Stack Segment */
	int *heap_var = malloc(sizeof(int));		/* Heap Segment */
	*heap_var = 100;

	printf("==== Memory Segment Addresses ====\n\n");
	printf("TEXT (main function):	%p\n",(void *)main);
	printf("TEXT (string literal):	%p\n",(void *)str_literal);
	printf("DATA (global initialized):	%p\n",(void *)&global_initialized);
	printf("DATA (global uninitialized):	%p\n",(void *)&global_uninitialized);
	printf("HEAP (malloc pointer):    %p\n",(void *)heap_var);
	printf("STACK (local variable):    %p\n",(void *)&stack_var);

	printf("\nPID: %d\n",getpid());
	printf("Print ENTER to view /proc/PID/maps......\n");
	getchar();

	return 0;
}
