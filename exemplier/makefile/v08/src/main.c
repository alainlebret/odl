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
 * Copyright (C) 1995-2023 Alain Lebret (alain.lebret@ensicaen.fr)
 */

/**
 * @file main.c
 *
 * Example to highligh projects with a more complex structure.
 *
 * @author    Alain Lebret <alain.lebret@ensicaen.fr>
 * @version   1.0 (1995)
 * @version   1.0.1 (2016)
 */

#include <stdlib.h>

#include "l/l.h"
#include "m/m.h"

int main(void) {
	ls_t ll;
	ms_t mm;

	l(ll);
	m(mm);

	return 0;
}
