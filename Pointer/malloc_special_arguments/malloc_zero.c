#include <stdio.h>
#include <stdlib.h>

int main() {
	char *p = (char *)malloc(0);
	printf("malloc(0) returned: %p\n",p);

	if(p != NULL){
		printf("Not-NULL! Implementation returned unique pointer.\n");
		/* Pass to free safely */
		free(p);
	} else {
		printf("NULL returned.\n");
	}
	return 0;
}
