/*************************************************************************
* manassus.c                                                             *
* Creation Date: 03/26/2020                                              *
* Modification Date: 03/28/2020                                          *
* Description: Main file                                                 *
**************************************************************************
* Change Log                                                             *
* 03/28/2020 TWK - Starting off NCurses interface                        *
* 03/26/2020 TWK - Initial File - blank main function                    *
*************************************************************************/

#include <stdio.h>
#include <stddef.h>
#include <locale.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include "manassus.h"

// main() - the main game loop
// command line options?

int main(int argc, char* argv[argc+1]) 
{
	setlocale (LC_ALL, "");
	initscr();
	noecho();
	curs_set(FALSE);
	mvprintw(0, 0, "Welcome to Flavour Towne!");
	refresh();
	sleep(2);
	mvprintw(10,0, "Feel the Burne!");
	refresh();
    sleep(10);
    endwin(); // Restore normal terminal behavior

    return EXIT_SUCCESS;
}
