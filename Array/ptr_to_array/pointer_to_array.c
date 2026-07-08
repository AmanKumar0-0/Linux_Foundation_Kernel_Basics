#include <stdio.h>

int main() {
	int a[4][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};

	// Pointer to array of 5 integers
	int (*ptr)[5];
	
	ptr = a; // Points to first row
	printf("Pointer to array:\n");
	printf("ptr points to: %p\n", (void*)ptr);
	printf("ptr[0][0] = %d\n", ptr[0][0]);
	ptr = ptr + 1; // Moves to next row (20 bytes)
	printf("\nAfter ptr+1:\n");
	printf("ptr now points to: %p\n", (void*)ptr);
	printf("ptr[0][0] = %d (second row, first element)\n", ptr[0][0]);
	printf("\nAddress jump: %ld bytes (entire row)\n",(long)((char*)(a + 1) - (char*)a));

	// Traversing using pointer to array
	ptr = a;
	printf("\nTraversing all elements:\n");
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
