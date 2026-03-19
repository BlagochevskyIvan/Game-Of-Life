#include <ncurses.h>
#include <stdio.h>

#include "game_of_life.h"

void draw_field(char (*field)[COL], int iter, int delay) {
  printw("iteration: %d     delay: %d ms\n", iter, delay * 100);
  for (int i = 0; i < 82; i++) {
    printw("#");
  }
  printw("\n");
  for (int i = 0; i < ROWS; i++) {
    printw("#");
    for (int j = 0; j < COL; j++) {
      printw("%c", field[i][j]);
    }
    printw("#\n");
  }
  for (int i = 0; i < 82; i++) {
    printw("#");
  }
  return;
}

void draw_end_field(char (*field)[COL], int iter) {
  for (int i = 0; i < 82; i++) {
    printf("#");
  }
  printf("\n");
  for (int i = 0; i < ROWS; i++) {
    printf("#");
    for (int j = 0; j < COL; j++) {
      printf("%c", field[i][j]);
    }
    printf("#\n");
  }
  for (int i = 0; i < 82; i++) {
    printf("#");
  }
  printf("\n");
  printf("game end on iteration %d", iter);
  return;
}