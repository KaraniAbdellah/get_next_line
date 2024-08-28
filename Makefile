CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main
SRCS = main.c function.c

all: clean $(TARGET)


$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) && ./$(TARGET)

clean:
	rm -f $(TARGET)


