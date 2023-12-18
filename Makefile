CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
INCLUDES = include
FORMATS = formats/

FT_PRINTF = src/ft_printf.c
FORMAT_SRCS = $(wildcard src/$(FORMATS)*.c)
SRCS = $(FT_PRINTF) $(FORMAT_SRCS)
LIBFT = libft
OBJS_DIR = obj/
OBJS = $(patsubst %,$(OBJS_DIR)%,$(SRCS:.c=.o))
GREEN = \033[0;92m

all: $(NAME)

$(NAME): $(OBJS)
	cp $(LIBFT)/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)libftprintf.a has been created."

$(OBJS_DIR)%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJS_DIR)$(FORMATS)%.o: $(FORMATS)%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJS): | $(LIBFT)/libft.a

$(LIBFT)/libft.a:
	make -C $(LIBFT)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJS_DIR)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
