#include <stdio.h>

#include "game_of_life.h"
void new_gen(char (*field)[COL], char (*nfield)[COL], int* iter) {
  int n;
  *iter += 1;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COL; j++) {
      char is_life = field[i][j];
      n = countneightbours(field, i, j);
      if ((n == 3 || n == 2) && is_life == '*') {
        nfield[i][j] = '*';
      } else if (n == 3 && is_life == ' ') {
        nfield[i][j] = '*';
      } else if (n < 2 && is_life == '*') {
        nfield[i][j] = ' ';
      } else if (n > 3 && is_life == '*') {
        nfield[i][j] = ' ';
      } else {
        nfield[i][j] = ' ';
      }
    }
  }
  return;
}

int is_end(char (*field)[COL], char (*nfield)[COL]) {
  int flag = 1;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COL; j++) {
      if (field[i][j] != nfield[i][j]) flag = 0;
    }
  }
  return flag;
}

void copy(char (*field)[COL], char (*nfield)[COL]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COL; j++) {
      field[i][j] = nfield[i][j];
    }
  }
}

int countneightbours(char (*field)[COL], int i, int j) {
  int count = 0;

  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int k = 0; k < 8; k++) {
    int ni = (i + dx[k] + ROWS) % ROWS;
    int nj = (j + dy[k] + COL) % COL;

    if (field[ni][nj] == '*') {
      count++;
    }
  }

  return count;
}