#include <stdio.h>

int main() {
	int a[4][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};

	int (*ptr)[5] = a;	// Pointer to an array of 5 integer
	
	printf("Initial state:\n");
	printf("ptr = %p, *ptr[0] = %d\n",ptr,ptr[0][0]);

	// ptr + 1
	printf("\nAfter ptr + 1: \n");
	ptr = ptr + 1;
	printf("ptr = %p, *ptr[0] = %d\n",ptr,ptr[0][0]);
	printf("Jumped %zu bytes (one row)\n",sizeof(*ptr));

	// ptr - 1
	printf("\nAfter ptr - 1: \n");
	ptr = ptr - 1;
	printf("ptr = %p, *ptr[0] = %d\n",ptr,ptr[0][0]);

	// Loop with ptr++
	printf("\nLooping with ptr++:\n");

	for(int i = 0; i < 4; i++) {
		printf("Row %d at %p: ",i,ptr);
		for(int j = 0; j < 5; j++) {
			printf("%2d", (*ptr)[j]);
		}
		printf("\n");
		ptr++;
	}
	
	// Reset and loop with ptr--
	printf("\nLoopint Backward with ptr--:\n");
	ptr = a + 3;		//Start from last row
	
	for(int i = 3; i >= 0; i--) {
		printf("Row %d:", i);

		for(int j = 0; j < 5; j++) {
			printf("%2d",(*ptr)[j]);
		}
		printf("\n");
		ptr--;
	}

	return 0;
}

	

