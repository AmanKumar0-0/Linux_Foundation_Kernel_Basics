#include <stdio.h>
#include <stdlib.h>

int main() {
	char *cptr = (char *)malloc(10*sizeof(char));
	if(!cptr) return -1;

	for(int i = 0; i < 10; i++)
		*(cptr + i) = 'A' + i;

	/* DANGER: writing beyound the boundary */
	printf("writing beyound allowed 10 bytes....\n");
	for(int i = 10; i < 50; i++) {
		*(cptr + i) = 'X' + i;	/* UNDEFINED BEHAVIOR */
		printf(" Wrote to cptr + %d = %p with value %c\n",i,(cptr + i),*(cptr + i));
	}

	printf("Survived :) May crash later if memory isnt free ");
	free(cptr);	cptr = NULL;
	return 0;
}
