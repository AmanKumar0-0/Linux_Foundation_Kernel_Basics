#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("PID: %d\n",getpid());

	char *cptr = (char *)malloc(10);	/* allocate 10 bytes from heap */
	if( cptr == NULL){
		printf("malloc failed");
		return -1;
	}

	printf("cptr address: %p\n",(void *)cptr);
	printf("sizeof pointer: %zu bytes\n",sizeof(cptr));

	printf("\nPress Enter to check the /proc/%d/maps....\n",getpid());
	getchar();

	free(cptr);
	cptr = NULL;	/* always NULL after free for dynamic pointers */
	return 0;
}
