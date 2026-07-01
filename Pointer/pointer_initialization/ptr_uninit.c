#include <stdio.h>
#include <stdlib.h>

int main(){
	char *cptr; 	/* Not initialized - contains garbage address */
	printf("cptr: %p\n",(void *)cptr);

	*cptr = 'A';	/* Segmentation Fault */
	
	return 0;
}
