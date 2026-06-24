#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	printf("PID: %d\n",getpid());

	printf("\nBefore malloc - Press ENTER to check Maps....\n");
	getchar();

	int *big = malloc(1024 * 1024); 	/* 1MB allocation */
	printf("After 1MB malloc at %p - press Enter....\n",(void *)big);
	getchar();

	int *bigger = malloc(10 * 1024 * 1024);		/* 10MB Allocation */
        printf("After 10MB malloc at %p - press Enter....\n",(void *)bigger);
	getchar();

	free(big);
	free(bigger);
	return 0;	
}
