#include <stdio.h>
#include "game_of_life.h"

int main (){
    char field[ROWS][COLS], nfield[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++){
            // два поля для реализации буфера
            field[i][j]= nfield[i][j] = ' ';
        }
    }
    if (!set_config(field)) {
        return 0;
    }
    draw_field(field);
// отрисовываем новое поле по старому -> строе поле приравниваем к новому -> по кругу
    while (1) {
        // new_gen(field, nfield)
        // draw_field(field)
    }
    return 0;
}

// надо добавить обработку конца игры