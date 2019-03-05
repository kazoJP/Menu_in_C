#include ".//portableUnix.h"

static struct termios _oldtermios, _newtermios;

/* Initialize _newtermios terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &_oldtermios); /* grab _oldtermios terminal i/o settings */
  _newtermios = _oldtermios; /* make _newtermios settings same as _oldtermios settings */
  _newtermios.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) {
      _newtermios.c_lflag |= ECHO; /* set echo mode */
  } else {
      _newtermios.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &_newtermios); /* use these _newtermios terminal i/o settings now */
}

/* Restore _oldtermios terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &_oldtermios);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void) 
{
  return getch_(1);
}
