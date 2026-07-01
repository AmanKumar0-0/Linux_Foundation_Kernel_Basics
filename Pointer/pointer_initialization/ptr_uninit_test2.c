#include <stdio.h>

int main(){
	char *cptr = NULL;
	*cptr = 'A';	/* This will caluse Segmentation fault */

	/* We are writing null section of the memory which is generaly
	 * protected by the OS simply thats the area of the protected
	 * section of a memory which can only be accressed in 
	 * protected mode */

	return 0;
}
