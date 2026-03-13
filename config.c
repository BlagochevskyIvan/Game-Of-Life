#include <stdio.h>
#include "game_of_life.h"

int set_config(char (*field)[COLS]) {
    int n, n1, n2;
    char e;
    int flag = 1;

    if (scanf("%d%c", &n, &e) != 2 || e != '\n' || n < 0) {
        flag = 0;
    }

    for (int i = 0; i < n && flag; i++) {
        if (scanf("%d %d%c", &n1, &n2, &e) != 3 || e != '\n') {
            flag = 0;
        } else if (n1 < 1 || n1 >= ROWS + 1 || n2 < 1 || n2 >= COLS + 1) {
            flag = 0;
        } else {
            field[n1-1][n2-1] = '*';
        }
    }
    if (flag == 0) printf("n/a");
    return flag;
}

// функция подсчёта клеток вокруг
