int main() {
    char field[ROWS][COLS], nfield[ROWS][COLS];
    int speed = 1;
    int ch;

    initscr();
    noecho();
    cbreak();
    nodelay(stdscr, TRUE);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            field[i][j] = nfield[i][j] = ' ';
        }
    }

    if (!set_config(field)) {
        endwin();
        return 0;
    }

    draw_field(field);
    new_gen(field, nfield);

    while (!is_end(field, nfield)) {

        ch = getch();

        if (ch == 'a' || ch == 'A') {
            if (speed > 1) speed--;
        }

        if (ch == 'z' || ch == 'Z') {
            if (speed < 5) speed++;
        }

        sleep(speed);

        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                field[i][j] = nfield[i][j];

        clear();
        draw_field(field);
        new_gen(field, nfield);
        refresh();
    }

    endwin();
    return 0;
}