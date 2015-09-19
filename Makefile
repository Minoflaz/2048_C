CC=gcc
CFLAGS=-Wall
LDFLAGS=-lm
EXEC=2048
SRC= $(wildcard ~/Projet_2048/*.c)
OBJ= $(SRC:.c=.o)

run: mrproper 2048
	@./$(EXEC)


2048: $(SRC)
	@$(CC) -o $@ $^ $(LDFLAGS)

main.o: main.c

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)


