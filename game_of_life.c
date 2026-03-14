#include <stdio.h>
#include "game_of_life.h"

int main (){
    char field[ROWS][COLS], nfield[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++){
            field[i][j]= nfield[i][j] = ' ';
        }
    }
    if (!set_config(field)) {
        return 0;
    }
    draw_field(field);
    // new_gen(field, nfield);
    // while (!is_end(field, nfield)) {
    //     // копируем новое поле в старое
    //     draw_field(field);
    //     new_gen(field, nfield);
    // }
    return 0;
}