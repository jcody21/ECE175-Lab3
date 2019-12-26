#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Author: John Cody
  Date created: 02/07/2018
  Program Description: This program outputs a pyramid of different sizes to the pyramid.txt file depending on the value specified by the user. 
*/

int main(void) {

	int input = 0;
	int row = 0;
	int space = 0;
	int col = -1;

	FILE*output;
	output = fopen("pyramid.txt", "w");

	if (output == NULL) {
		printf("The pyramid.txt file could not be found.");
		return -1;
	}
	
	printf("Enter the pyramid height : ");
	scanf("%d", &input);

	for (row = 0; row < input; row++) {
		for (space = input - row - 1 ; space > 0; space--) {
			fprintf(output, " ");
		}
		for (col = 1 + 2 * row; col > 0; col--) {
			fprintf(output, "*");
		}
		fprintf(output, "\n");
	}
	printf("\n");

	fclose(output);

	return 0;
}