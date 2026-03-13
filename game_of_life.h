#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#define ROWS 25
#define COLS 80

void draw_field(char (*field)[COLS]);
int set_config(char (*field)[COLS]);

#endif