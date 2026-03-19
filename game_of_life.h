#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#define ROWS 25
#define COL 80

void draw_field(char (*field)[COL], int iter, int delay);
int set_config(char (*field)[COL]);
void new_gen(char (*field)[COL], char (*nfield)[COL], int* iter);
int is_end(char (*field)[COL], char (*nfield)[COL]);
void copy(char (*field)[COL], char (*nfield)[COL]);
int countneightbours(char (*field)[COL], int i, int j);
void draw_end_field(char (*field)[COL], int iter);
void control(int ch, int* delay, int* run);

#endif