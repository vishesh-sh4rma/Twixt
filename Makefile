CC = gcc
CFLAGS = -Wall -g -std=c11 -Wl,--subsystem,console
SRCS = main.c board.c ui.c
OBJS = $(SRCS:.c=.o)
TARGET = twixt

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)