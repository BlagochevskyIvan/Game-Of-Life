#include <stdio.h>
#include "game_of_life.h"

int main (){
    char field[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++){
            field[i][j] = ' ';
        }
    }
    if (!set_config(field)) {
        return 0;
    }
    draw_field(field);
    return 0;
}