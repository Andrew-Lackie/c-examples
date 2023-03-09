#include <stdio.h>

void Double(int*);
void PrintArrayDecimal(char*, int);
void PrintArrayChar(char*, int);
void PrintArrayAddress(char*, int);

int main() {

	char A[6] = "Hello";
	int sizeA = sizeof(A)/sizeof(A[0]);
	PrintArrayDecimal(A, sizeA);
	PrintArrayChar(A, sizeA);
	PrintArrayAddress(A, sizeA);

	char B[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	int sizeB = sizeof(B)/sizeof(B[0]);
	PrintArrayDecimal(B, sizeB);
	PrintArrayChar(B, sizeB);
	PrintArrayAddress(B, sizeB);

	printf("\n");

	printf("%d\t", A[0]); // will print 72 (decimal of H)
	printf("%c\n", A[0]); // will print H

	printf("%d\t", *(A+1)); // will print 101 (decimal of e)
	printf("%d\t", A[1]); // will print 101 (decimal of e)
	printf("%c\t", *(A+1)); // will print e
	printf("%c", A[1]); // will print e

	printf("\n");

	int c = 10;
	int* pC;
	pC = &c;

	Double(pC);
	printf("Doubled: %d\n", *pC);

	printf("Address: %d\n", pC);
	printf("Value: %i\n", *pC);

	return 0;
}

void Double(int* a) {
	*a = 2 * (*a);
}

void PrintArrayDecimal(char* A, int size) {
	printf("Array in decimal format:\n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", *(A + i));
	}
	printf("\n");
}

void PrintArrayChar(char* A, int size) {
	printf("Array in char format:\n");
	for (int i = 0; i < size; i++) {
		printf("%c\t", *(A + i));
	}
	printf("\n");
}

void PrintArrayAddress(char* A, int size) {
	printf("Array in char format:\n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", A + i);
	}
	printf("\n");
}
