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
 * @author    Alain Lebret <alain.lebret@ensicaen.fr>
 * @version   1.0 (1995)
 * @version   1.0.1 (2016)
 */

/**
 * @file l.h
 *
 * Example to highligh projects with a more complex structure.
 */
#ifndef EXEMPLIER_L_H
#define EXEMPLIER_L_H

struct ls {
	int l1;
	int l2;
};

typedef struct ls ls_t;

void l(ls_t vls);

#endif
