/*
 * ENSICAEN
 * 6 Boulevard Maréchal Juin
 * F-14050 Caen Cedex
 *
 * Examples from the course "Software development tools"
 * Exemplier du cours "Outils de développement logiciel" (ODL)
 *
 * Chapter "The make command" / Chapitre "Commande make"
 *
 * Copyright (C) 1995-2017 Alain Lebret (alain.lebret@ensicaen.fr)
 */

/**
 * @file magic_board.c
 * 
 * Example from a laboratory exercise.
 *
 * @author    Alain Lebret <alain.lebret@ensicaen.fr>
 * @version   1.0
 * @date      2016
 */

#include <stdio.h>
#include <stdlib.h>

#define NMAX 3

void initialize(int matrix[NMAX][NMAX], int size) {
	int x;
	int y;

	for (y = 0; y < size; y++) {
		for (x = 0; x < size; x++) {
			matrix[y][x] = 0;
		}
	}
	matrix[size / 2 + 1][size / 2] = 1;
}

void fill(int matrix[NMAX][NMAX], int size) {
	int y;
	int x;
	int i;

	y = size / 2 + 1;
	x = size / 2;

	for (i = 2; i <= size * size; i++) {
		x = (x + 1) % size;
		y = (y + 1) % size;

		if (matrix[y][x] != 0) {
			x = (x + (size - 1)) % size;
			y = (y + 1) % size;
		}

		matrix[y][x] = i;
	}
}

void display(int matrix[NMAX][NMAX], int size) {
	int x;
	int y;

	for (y = 0; y < size; y++) {
		for (x = 0; x < size; x++) {
			printf("\t%d", matrix[y][x]);
		}
		printf("\n");
	}
}

int main(void) {
	int matrix[NMAX][NMAX];

	initialize(matrix, NMAX);
	fill(matrix, NMAX);
	display(matrix, NMAX);

	return 0;
}
