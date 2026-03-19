#include <ncurses.h>

void control(int ch, int* delay, int* run) {
  if (ch == 'z' && *delay > 2) {
    *delay -= 1;
    halfdelay(*delay);
  }
  if (ch == 'a' && *delay < 20) {
    *delay += 1;
    halfdelay(*delay);
  }
  if (ch == ' ') {
    *run = 0;
  }
  return;
}