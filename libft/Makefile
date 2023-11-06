NAME = libft.a
RM = rm -rf
CC = gcc
FLAG = -Wall -Wextra -Werror
MKDIR = mkdir -p
OBJDIR = OBJECTS
OBJDIRBONUS = OBJECTS_BONUS
CMPL = $(CC) $(FLAG) -c
SRC =	./ft_atoi.c 		\
 		./ft_bzero.c 		\
 		./ft_calloc.c 		\
 		./ft_isalnum.c 		\
 		./ft_isalpha.c 		\
 		./ft_isascii.c 		\
 		./ft_isdigit.c 		\
 		./ft_isprint.c 		\
 		./ft_itoa.c 		\
 		./ft_memchr.c 		\
 		./ft_memcmp.c 		\
 		./ft_memcpy.c 		\
 		./ft_memmove.c 		\
 		./ft_memset.c 		\
 		./ft_putchar_fd.c 	\
 		./ft_putendl_fd.c 	\
 		./ft_putnbr_fd.c 	\
 		./ft_putstr_fd.c 	\
		./ft_split.c		\
 		./ft_strchr.c 		\
 		./ft_strdup.c		\
 		./ft_striteri.c 	\
 		./ft_strjoin.c 		\
 		./ft_strlcat.c 		\
		./ft_strlcpy.c		\
 		./ft_strlen.c 		\
 		./ft_strmapi.c 		\
 		./ft_strncmp.c 		\
 		./ft_strnstr.c 		\
		./ft_strrchr.c 		\
 		./ft_strtrim.c 		\
		./ft_substr.c		\
 		./ft_tolower.c 		\
 		./ft_toupper.c

BONUS = ./ft_lstadd_back.c 	\
		./ft_lstadd_front.c	\
 		./ft_lstclear.c		\
 		./ft_lstdelone.c 	\
 		./ft_lstiter.c 		\
		./ft_lstlast.c		\
 		./ft_lstmap.c 		\
 		./ft_lstnew.c		\
		./ft_lstsize.c


OBJ = $(addprefix $(OBJDIR)/,$(notdir $(SRC:.c=.o)))
OBJBONUS= $(addprefix $(OBJDIRBONUS)/,$(notdir $(BONUS:.c=.o)))

$(OBJDIR)/%.o:	%.c
	@$(MKDIR) $(OBJDIR)
	@$(CMPL) $< -o $@

$(OBJDIRBONUS)/%.o:	%.c
	@$(MKDIR) $(OBJDIRBONUS)
	@$(CMPL) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus: $(OBJBONUS)
	@ar rc $(NAME) $(OBJBONUS)
	@ranlib $(NAME)

clean:
	@$(RM) $(OBJDIR)
	@$(RM) $(OBJDIRBONUS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus