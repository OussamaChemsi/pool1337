NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
RM = rm -f
MANDATORY = ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcmp.c \
		ft_memchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c  \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_atoi.c ft_strnstr.c  ft_strncmp.c ft_calloc.c ft_strdup.c \
		ft_itoa.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_split.c\
		ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c  ft_strmapi.c ft_striteri.c\

BONUS =	ft_lstsize_bonus.c  ft_lstadd_front_bonus.c\
			ft_lstadd_back_bonus.c ft_lstnew_bonus.c \
			ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c\
			ft_lstiter_bonus.c ft_lstmap_bonus.c
	
MANDATORY_O = ${MANDATORY:.c=.o}
BONUS_O = ${BONUS:.c=.o}

${NAME}: ${MANDATORY_O}
	${LIBC} ${NAME} ${MANDATORY_O}

all: ${NAME}
bonus : ${BONUS_O}

${BONUS_O}:${BONUS}
	${CC} ${CFLAGS} -c ${BONUS}
	${LIBC} ${NAME} ${BONUS_O}

clean:
	${RM} ${MANDATORY_O} ${BONUS_O}

fclean: clean
	${RM} ${NAME} 

re: fclean all