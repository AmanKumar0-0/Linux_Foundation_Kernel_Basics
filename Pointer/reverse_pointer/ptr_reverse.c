#include <stdio.h>
#include <stdlib.h>

int main() {
	int *iptr = (int *)malloc(10 * sizeof(int));
	if(!iptr) return -1;

	for(int i = 0; i < 10; i++)
		*(iptr + i) = 'A' + i;

	int *end = iptr + 9;
	printf("==== Reverse traversal ====\n");
	for(int i = 0; i < 10; i++)
		printf(" *(end - %d) = %c\n",i,*(end - i));

	free(iptr);	iptr = NULL;
	return 0;
}
