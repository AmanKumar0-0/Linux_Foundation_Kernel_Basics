#include <stdio.h>
#include <stdlib.h>

int main() {
        char *p = (char *)malloc(-1);
	
	/* -1 as size_t (unsigned) = 0xFFFFFFFFFFFFFFFF = 18,446,744,073,709,551,615 bytes */
	/* This is ~18 exabytes - impossible to allocate! */
	printf("malloc(-1) returned: %p\n",(void *)p);
	
	/* Remember malloc returns NULL when requested size is too large */
	/* This is why we should always check for NLL after malloc */	
	
	/* BAD: hardcoded size */
	int *p1 = (int *)malloc(10);

	/* GOOD: sizeof adpts to architecture */
	int *p2 = (int *)malloc(10 * sizeof(int));

	return 0;
}
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
~                                                                                                                                                               
                                                                                                                                              1,1           All

