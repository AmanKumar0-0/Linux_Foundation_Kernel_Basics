#include <stdio.h>
#include <stdlib.h>

int main() {
	char *cptr = (char *)malloc(10);
	if(!cptr) return 0;

	for(int i = 0; i < 10; i++) {
		*(cptr + i) = 'A' + i;
	}

	printf("Before Free....\n");

	for(int i = 0; i < 10; i++)
		printf(" %c\n",*(cptr + i));
	printf("\n");

	free(cptr); 	/* Memory Deallocated */

	/* Dangling Pointer: cptr still holds the old address! */
	printf("\nAfter Free (dangling pointer):\n");
	for(int i = 0; i < 10; i++)
		printf(" %c\n",*(cptr + i));	/*Data May stll be there */
	printf("\n");

	printf("\nDANGER: data still visible because no one else claimed it.\n");
	printf("This is a dangling pointer - use after free bug! \n");

	/* safe: Always NULL after free */
	cptr = NULL;
	return 0;
}
