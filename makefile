CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = program

all: $(TARGET)

$(TARGET): game_of_life.c
	$(CC) game_of_life.c draw_field.c config.c -o $(TARGET)

run1: $(TARGET)
	./$(TARGET) < test1.txt

run2: $(TARGET)
	./$(TARGET) < test2.txt

run3: $(TARGET)
	./$(TARGET) < test3.txt

run4: $(TARGET)
	./$(TARGET) < tests/test4.txt

run5: $(TARGET)
	./$(TARGET) < test5.txt

clean:
	rm -f $(TARGET)