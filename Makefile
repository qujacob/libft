# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qujacob <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 15:44:47 by qujacob           #+#    #+#              #
#    Updated: 2021/05/30 16:20:17 by qujacob          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = ./
OBJDIR = ./
INCDIR = ./

SRCS = 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
OBJS := $(addprefix $(OBJDIR), $(OBJS))

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c
OBJS_B = $(SRCS_B:.c=.o)
OBJS_B := $(addprefix $(OBJDIR), $(OBJS_B))

CC = gcc
FLAGS = -Wall -Wextra -Werror -I$(INCDIR)
RM = rm -rf
MKDIR = mkdir -p

all : $(NAME)

bonus : $(NAME) $(OBJS_B)
	@touch bonus
	@ar rc $(NAME) $(OBJS_B)
	@ranlib $(NAME)
	@echo "\n=============================================\n"

$(OBJDIR)%.o : $(SRCDIR)%.c
	@$(MKDIR) $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "compiling $<..."

$(NAME) : $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\n=============================================\n"

clean:
	@$(RM) $(OBJS) $(OBJS_B)
	@echo "deleting objects..."

fclean:	clean
	@$(RM) $(NAME) bonus
	@echo "deleting $(NAME)..."
	@echo "\n=============================================\n"

re : fclean all

.PHONY: all clean fclean re
