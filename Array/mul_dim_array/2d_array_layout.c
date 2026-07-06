#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	printf("2D Array Memory Layout: \n");
	printf("Total size: %zu bytes\n",sizeof(a));
	printf("Expressed: 4 rows * 5 cols * 4 bytes = %d bytes\n",4*5*4);

	printf("\nContiguous memory addresses:\n");
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 5; j++){
			printf("a[%d][%d] = %2d at %p\n",i,j,a[i][j],&a[i][j]);
		}
	}

	// Verify the contiguous layout
	printf("\nAddress differences:\n");
	printf("&a[0][1] - &a[0][0] = %ld bytes\n",(long)((char *)&a[0][1] - (char *)&a[0][0]));
	printf("&a[1][0] - &a[0][4] = %ld bytes\n",(long)((char *)&a[1][0] - (char *)&a[0][4]));

	return 0;

}
