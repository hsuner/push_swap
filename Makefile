NAME			=	push_swap.a
NAME2			=	push_swap
NAME3			=	checker
NAME4			=	push_swap.c
NAME5			=	checker.c

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRC				=	free_error.c \
					get_next_line.c \
					quick_sort.c \
					rules_a.c \
					rules_b.c \
					rules_doubles.c \
					sort_small_utils.c \
					sort_small.c \
					sources.c \
					utilities.c			

OBJ_DIR			=	OBJECTS
OBJS			=	$(SRC:%.c=$(OBJ_DIR)/%.o)

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

$(OBJ_DIR)/%.o:		%.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS)
	@cp	$(LIBFT) $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME2) $(NAME) $(NAME4)
	@$(CC) $(CFLAGS) -o $(NAME3) $(NAME) $(NAME5)
	@printf "\n\033[96m   Built 🛠 \033[0m\n\n"

$(LIBFT):
	@make -C $(LIBFT_PATH) all

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@clear
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJ_DIR) $(NAME)
	@printf "\n\033[95m   Deleted ⛔️ \033[0m\n\n"
	@sleep 0.5
	@clear
fclean:	clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME2) $(NAME3)

re: fclean all

.PHONY:	all clean fclean re libft