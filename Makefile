SRCS_DIR		:= srcs/
SRC				:= ft_strlen.c ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
					ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c \
					ft_memchr.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memccpy.c \
					ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
					ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putendl_fd.c \
					ft_putnbr_fd.c
BONUS			:= ft_islower.c ft_isupper.c ft_isxdigit.c ft_isgraph.c ft_isspace.c \
					ft_ispunct.c ft_iscntrl.c ft_strstr.c ft_strlen_2.c ft_putendl.c \
					ft_putnbr.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
SRCS			:= $(addprefix $(SRCS_DIR),$(SRC))
BONUS_SRCS		:= $(addprefix $(SRCS_DIR),$(BONUS))
OBJS			:= $(SRCS:%.c=%.o)
BONUS_OBJS		:= $(BONUS_SRCS:%.c=%.o)
NAME			:= libft.a

RM				:= rm -f
CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
AR				:= ar -rcs

# Colors
MAIN = \033[38;5;50m
PLOAD = \033[38;5;119m
GREEN = \033[38;5;47m
BLUE = \033[0;38;5;12m
ORANGE = \033[0;38;5;214m
RED = \033[1;31m

END = \033[0m
BOLD = \033[1m

# MSG Prefixes
INFO = $(MAIN)Info$(END)
WARN = $(ORANGE)Warning$(END)
IMPORTANT = $(ORANGE)Important$(END)
FAILED = $(RED)Fail$(END)
DEBUG = $(ORANGE)Debug$(END)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(INFO) libft updated"

%.o:		%.c
			@echo "$(ORANGE) Creating $(<:%.c=%.o) $(END)"
			@$(CC) $(CFLAGS) -c $< -o $(<:%.c=%.o)

bonus:		$(OBJS) $(BONUS_OBJS)
			@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
			@echo "$(INFO) libft updated WITH bonuses"

clean:
			@echo "$(INFO) Deleting .o files"
			@$(RM) $(OBJS)
			@$(RM) $(BONUS_OBJS)

fclean:		clean
			@echo "$(INFO) Deleting $(NAME) and libft.so"
			@$(RM) $(NAME)
			@$(RM) libft.so

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
			$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)

re:			fclean all

check:		bonus
			@$(MAKE) fclean

.PHONY:		all bonus clean fclean re so check
