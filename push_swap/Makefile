CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = check.c ft_split.c general.c  push_swap.c  instructions.c parse.c index.c part1.c part2.c stack_a_inst.c stack_b_inst.c sort.c free_mem.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): push_swap.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

