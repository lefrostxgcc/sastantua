CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLS := ft.h sastantua.h
INCLDIR = include/
HEADERS = $(addprefix $(INCLDIR), $(INCLS))

SRCS := main.c sastantua.c ft.c
SRCDIR = src/
FILES = $(addprefix $(SRCDIR), $(SRCS))

OBJS = $(FILES:.c=.o)

TARGET = sastantua

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(FILES:.c=.o)

fclean: clean
	rm -f $(TARGET)

re: fclean all
