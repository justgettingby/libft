NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

# TEMPORARY: wildcard picks up every ft_*.c automatically (replace with an explicit list later)
SRCS	= $(wildcard ft_*.c)
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
