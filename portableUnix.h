#include <termios.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef __PORTABLEUNIXC__
#define __PORTABLEUNIXC__
#define CLEARMYSCREEN (system("clear"))

void initTermios(int);
void resetTermios(void);
char getch_(int);
char getch(void);
char getche(void);

#endif
