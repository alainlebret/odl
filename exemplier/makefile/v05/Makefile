#
# ENSICAEN
# 6 Boulevard Maréchal Juin
# F-14050 Caen Cedex
#
# Examples from the course "Software development tools"
# Exemplier du cours "Outils de développement logiciel" (ODL)
#
# Chapter "The make command" / Chapitre "Commande make"
#
# Copyright (C) 1995-2023 Alain Lebret (alain.lebret@ensicaen.fr)
#

magic_board : magic_board.o matrix.o
	gcc magic_board.o matrix.o -o magic_board

magic_board.o : magic_board.c matrix.h
	gcc -I. -Wall -Wextra -ansi -pedantic magic_board.c -c 

matrix.o : matrix.c matrix.h
	gcc -I. -Wall -Wextra -ansi -pedantic matrix.c -c 

clean : 
	rm *.o magic_board
