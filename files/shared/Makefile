CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -fPIC
SRCS = ../main.c ../my_lib.c
OBJS = my_lib.o
LIB = libmy_lib.so
TARGET = myprogram

all: $(LIB) $(TARGET)

$(LIB): $(OBJS)
	$(CC) -shared -o $(LIB) $(OBJS)

my_lib.o: my_lib.c my_lib.h
	$(CC) $(CFLAGS) -c my_lib.c

$(TARGET): main.c $(LIB)
	$(CC) -o $(TARGET) main.c -L. -lmy_lib -Wl,-rpath=$(pwd)

clean:
	rm -f *.o $(LIB) $(TARGET)