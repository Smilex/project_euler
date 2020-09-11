.PHONY: all

CC = gcc
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
		$(CC) -g -o $@ $<
