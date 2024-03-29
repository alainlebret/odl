/*
 * ENSICAEN
 * 6 Boulevard Maréchal Juin
 * F-14050 Caen Cedex
 *
 * Examples from the course "Software development tools"
 * Exemplier du cours "Outils de développement logiciel" (ODL)
 *
 * Chapter "Debugging, testing, profiling" / Chapitre "Mise au point"
 *
 * Copyright (C) 1995-2023 Alain Lebret (alain.lebret@ensicaen.fr)
 */

/**
 * @file testgdb.c
 * 
 * Testing f1() to use the GNU debugger.
 *
 * Compile with: gcc -Wall -Wextra -ansi -pedantic -g test_gdb.c f.c -o test_gdb
 *
 * Run the debugger: gdb ./test_gdb
 *
 * @author    Alain Lebret <alain.lebret@ensicaen.fr>
 * @version   1.0 (1995)
 * @version   1.0.1 (2016)
 */

#include <stdio.h>
#include <stdlib.h>

#include "f.h"

int main(void) {
	int x;
	
	x = 3;
	f1(x);

	exit(EXIT_SUCCESS);
}
