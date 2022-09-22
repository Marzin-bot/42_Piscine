CC = gcc
EXEC = libft.a
SRCS_PATH = srcs
SRC = $(SRCS_PATH)/*.c
OBJ = $(SRC:.c=.o)

all: prog

$(SRCS_PATH)/ft_putstr.o: $(SRCS_PATH)/ft_putstr.c
	$(CC) -c $(SRCS_PATH)/ft_putstr.c -o $(SRCS_PATH)/ft_putstr.o -Iinclude/ft.h

$(SRCS_PATH)/ft_strcmp.o: $(SRCS_PATH)/ft_strcmp.c
	$(CC) -c $(SRCS_PATH)/ft_strcmp.c -o $(SRCS_PATH)/ft_strcmp.o -Iinclude/ft.h

$(SRCS_PATH)/ft_strlen.o: $(SRCS_PATH)/ft_strlen.c
	$(CC) -c $(SRCS_PATH)/ft_strlen.c -o $(SRCS_PATH)/ft_strlen.o -Iinclude/ft.h

$(SRCS_PATH)/ft_swap.o: $(SRCS_PATH)/ft_swap.c
	$(CC) -c $(SRCS_PATH)/ft_swap.c -o $(SRCS_PATH)/ft_swap.o -Iinclude/ft.h

prog: $(SRCS_PATH)/ft_putstr.o $(SRCS_PATH)/ft_strcmp.o $(SRCS_PATH)/ft_strlen.o $(SRCS_PATH)/ft_swap.o
	ar rc $(EXEC) $(SRCS_PATH)/ft_putstr.o $(SRCS_PATH)/ft_strcmp.o $(SRCS_PATH)/ft_strlen.o $(SRCS_PATH)/ft_swap.o

clean:
	rm $(OBJ)

fclean: clean
	rm $(EXEC)

re: fclean all
