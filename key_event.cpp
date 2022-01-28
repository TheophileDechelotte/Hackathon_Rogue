#include <iostream>
#include <sys/ioctl.h>
#include <termios.h>
#include <cstdio>
#include <ctime>
#include "key_event.h"

static const int STDIN = 0;
static bool initialized = false;

int keyEvent()
{
  // lit des caractères dans un terminal pour faire bouger le héro

  if (!initialized)
  {
    termios term;
    tcgetattr(STDIN, &term);
    term.c_lflag &= ~ICANON;
    tcsetattr(STDIN, TCSANOW, &term);
    setbuf(stdin, NULL);
    initialized = true;
  }
  int bytesWaiting;
  ioctl(STDIN, FIONREAD, &bytesWaiting);
  return bytesWaiting;
}