/*
 * ENSICAEN
 * 6 Boulevard Maréchal Juin
 * F-14050 Caen Cedex
 *
 * Handout from the course "Software development tools"
 * Exemplier du cours "Outils de développement logiciel" (ODL)
 *
 * Chapter "The make command" / Chapitre "Commande make"
 *
 * Copyright (C) 2016 Alain Lebret (alain.lebret (at) ensicaen.fr)
 */

/**
 * @author Alain Lebret <alain.lebret@ensicaen.fr>
 * @version	0.0.1 – 2016-10-01
 */

/**
 * @file magic_square.c

 * Example from a labory exercise. This file only contains a _em main()
 * function. Other functions have been moved to \em matrix.c and their
 * prototypes to \em matrix.h.
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(void) {
	int matrix[NMAX][NMAX];

	printf("Jeu du carré magique\n");
	initialize(matrix, NMAX);
	fill(matrix, NMAX);
	display(matrix, NMAX);

	exit(EXIT_SUCCESS);
}
