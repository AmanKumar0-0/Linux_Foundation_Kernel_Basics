#include <stdio.h>
#include <stdlib.h>

int main(){
	char *cptr = (char *)malloc(10);
	
	*cptr = 'A';

	for(int i = 0; i < 10; i++){
		printf("cptr: %p\t value: %c\n",cptr,*cptr + i);
	}

	return 0;
}
