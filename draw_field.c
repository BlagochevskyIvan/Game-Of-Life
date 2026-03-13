#include <stdio.h>
#include "game_of_life.h"

void draw_field(char (*field)[COLS]) {
    for (int i = 0; i < 82; i++) {
        printf("#");
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("#");
        for (int j = 0; j < COLS; j++){
            printf("%c", field[i][j]);
        }
        printf("#\n");
    }
    for (int i = 0; i < 82; i++) {
        printf("#");
    }
    return;
}