#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
  Author: John Cody
  Date created: 02/07/2018
  Program Description: This program takes input from the numbers file, and outputs the values held within to either the even or odd output files. 
*/

int main(void) {
	
	int transfer = 0;
	
	FILE*input;
	FILE*even;
	FILE*odd;

	input = fopen("numbers.txt", "r");
	even = fopen("even.txt", "w");
	odd = fopen("odd.txt", "w");

	if (input == NULL) {
		printf("Input file could not be found.\n");
	}
	if (even == NULL) {
		printf("Even file could not be found.\n");
	}
	if (odd == NULL) {
		printf("Odd file could not be found.\n");
	}

	while (feof(input) < 1) {
		fscanf(input, "%d ", &transfer);
		printf("%d\n", transfer);
		
		if((transfer % 2) > 0) {
			fprintf(odd, "%d ", transfer);
		}
		else {
			fprintf(even, "%d ", transfer);
		}

	}

	fclose(input);
	fclose(even);
	fclose(odd);
	
	return 0;
}