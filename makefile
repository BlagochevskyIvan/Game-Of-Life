CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = program

all: $(TARGET)

$(TARGET): main.c
	$(CC) main.c draw_field.c config.c process.c control.c -o $(TARGET) -lncurses

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