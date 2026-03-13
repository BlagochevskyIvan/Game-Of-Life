#include <stdio.h>
#include "game_of_life.h"
void new_gen(char *field[COLS], char *nfield[COLS]) {
    int n = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            char is_life = field[i][j];
            // n = ...
            // считаем по старому списку n соседей для клеток
            if ((n == 3 || n == 2) && is_life == '*') {
                nfield[i][j] = "*";
            } else if (n == 3 && is_life == ' '){
                nfield[i][j] = "*";
            } else if (n < 2 && is_life == '*'){
                nfield[i][j] = " ";
            } else if (n > 3 && is_life == '*'){
                nfield[i][j] = " ";
            } else {
                nfield[i][j] = " ";
            }
        }
    return;
    }
}

int is_end(char *field[COLS], char *nfield[COLS]) {
    int flag = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (field[i][j] != nfield[i][j]) flag = 0; 
        }
    }
    return flag;
}

void copy(char *field[COLS], char *nfield[COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            field[i][j] = nfield[i][j];
        }
    }
}