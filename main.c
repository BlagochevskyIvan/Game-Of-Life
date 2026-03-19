#include <ncurses.h>
#include <stdio.h>

#include "game_of_life.h"

int main() {
  char field[ROWS][COL], nfield[ROWS][COL];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COL; j++) {
      field[i][j] = nfield[i][j] = ' ';
    }
  }
  int delay = 5;
  int run = 1;
  int iter = 0;

  if (!set_config(field)) {
    return 0;
  }

  freopen("/dev/tty", "r", stdin);

  initscr();
  noecho();
  cbreak();
  curs_set(0);
  nodelay(stdscr, TRUE);
  halfdelay(delay);
  draw_field(field, iter, delay);
  new_gen(field, nfield, &iter);

  while (run && !is_end(field, nfield)) {
    copy(field, nfield);
    timeout(delay);
    clear();
    draw_field(field, iter, delay);
    int ch = getch();
    control(ch, &delay, &run);
    new_gen(field, nfield, &iter);
    refresh();
  }
  endwin();
  draw_end_field(field, iter);
  return 0;
}