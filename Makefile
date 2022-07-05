SRCS_DIR		:= srcs/
SRC				:= ft_strlen.c ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
					ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c
SRCS			:= $(addprefix $(SRCS_DIR),$(SRC))
OBJS			:= $(SRCS:%.c=%.o)
NAME			:= libft.a

RM				:= rm -f
CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
AR				:= ar -rcs

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $(<:%.c=%.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

check:		re
			$(MAKE) fclean

.PHONY:		all clean fclean re check