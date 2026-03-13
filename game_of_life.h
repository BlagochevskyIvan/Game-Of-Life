#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#define ROWS 25
#define COLS 80

void draw_field(char (*field)[COLS]);
int set_config(char (*field)[COLS]);
void new_gen(char *field[COLS], char *nfield[COLS]);
int is_end(char *field[COLS], char *nfield[COLS]);
void copy(char *field[COLS], char *nfield[COLS]);

#endif