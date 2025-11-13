ARCH    = arm-linux-gnueabi-
CC      = gcc
SRCS    = ../mymain.c ../my_lib.c
OBJS    = $(SRCS:.c=.o)
TARGET  = mymain

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CC) $(OBJS) -static -o $(TARGET)

%.o: %.c
	@$(CC) -c $< -o $@

clean:
	@rm -f $(OBJS) $(TARGET)

