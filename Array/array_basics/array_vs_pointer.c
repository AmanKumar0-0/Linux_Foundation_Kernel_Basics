#include <stdio.h>

int main() {
	int a[5] = {1,2,3,4,5};
	int *ptr;

	printf("Array a: %p\n",a);
	printf("sizeof(a): %zu bytes\n",sizeof(a));

	ptr = a;	// Valid: ptr points to array
	printf("ptr = a: %p\n",ptr);
	printf("sizeof(ptr): %zu bytes\n",sizeof(ptr));

	// This is invalid 
	// a = ptr;
	
	ptr = ptr + 1;		// Valid: pointer can be incremented
	printf("ptr after ptr + 1: %p\n",ptr);

	// Invalid operations in pointer
	// ptr = ptr * 2;
	// ptr = ptr / 2;
	
	return 0;
}
