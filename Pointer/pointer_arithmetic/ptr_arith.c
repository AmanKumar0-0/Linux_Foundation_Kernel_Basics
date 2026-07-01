#include <stdio.h>
#include <stdlib.h>

int main() {
	/* === char pointer: increment by 1 byte */
	char *cptr = (char *)malloc(10);
	if(!cptr) return -1;

	printf("char pointer sizeof(char) = %zu and starting point of cptr: %p\n",sizeof(char),cptr);
	for(int i = 0; i < 10; i++) {
		*(cptr + i) = 'A' + i;
		printf("cptr + %d = %p value = %c\n",i,cptr+i,*(cptr+i));
	}

	/* === int pointer: increment by 4 byte === */
	int *iptr = (int *)malloc(sizeof(int)*10);	/* 40 Byte total (4 Byte * 10) */
	if(!iptr) {free(cptr);	return -2; }

	printf("int pointer sizeof(int) = %zu and the starting point of cptr: %p\n",sizeof(int),iptr);
	for(int i = 0; i < 10; i++) {
		*(iptr + i) = i * 10;
		printf("iptr + %d  = %p value = %d\n",i,iptr + i, *(iptr + i));
	}
	free(cptr); cptr = NULL;
	free(iptr); iptr = NULL;
	return 0;
}
