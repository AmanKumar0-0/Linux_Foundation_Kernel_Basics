#include <stdio.h>

int sum1(int arr[], int size);		// Array Notation
int sum2(int *arr, int size);		// Pointer Notation
int sum3(int arr[5], int size);		// Size ignored!
	
int main() {
	int a1[5] = {1,2,3,4,5};

	printf("In Main: \n");
	printf("	Address of al: %p\n",a1);
	printf("	sizeof(a1): %zu bytes\n",sizeof(a1));

	int result = sum1(a1,5);
	printf("\nSum = %d\n",result);

	return 0;
}

int sum1(int arr[], int size) {
	printf("\nIn sum1:\n");
	printf("	Address of arr: %p\n",arr);
	printf("	sizeof(arr): %zu bytes\n",sizeof(arr));
	
	int total = 0;
	for(int i = 0; i < size; i++) {
		total += arr[i];
	}

	return total;
}

int sum2(int *arr, int size) {
	int total = 0;
	for(int i = 0; i < size; i++) {
		total += arr[i];
	}

	return total;
}

int sum3(int arr[5], int size) {

	int total = 0;
	for(int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total;
}
