#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tisergue <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/11 11:37:26 by tisergue          #+#    #+#              #
#    Updated: 2016/04/11 10:08:12 by gseropia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=		libftprintf.a

PROG		=		lem-in

SRCS		=		ft_isprint.c ft_itoabase.c ft_itoabaselonglongmax.c fonctionsps.c\
					ft_itoabaselongmax.c ft_itoabaseprintf.c ft_longitoa.c \
					ft_itoabasemax.c ft_longitoabase.c ft_longlongitoa.c solverps.c\
					ft_longlongitoabase.c ft_maxtoa.c ft_printf.c return_char.c \
					onfaitdeschecks.c return_int.c return_longint.c pssolver.c\
					return_longlongi.c return_longlongo.c return_longo.c push_swap.c \
					return_majstring.c return_maxi.c return_octal.c ft_putwchar.c \
					return_string.c return_wint.c returnmaxo.c ft_atoi.c ft_bzero.c \
					ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isdigit.c main.c \
					ft_isprint.c ft_memalloc.c ft_memcpy.c ft_lstnew.c ft_memchr.c ft_itoa.c \
					ft_memdel.c ft_memccpy.c ft_memcmp.c ft_putchar.c ft_memmove.c \
					ft_putchar_fd.c ft_memset.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
					ft_putstr_fd.c ft_putstr.c ft_putnbr_fd.c ft_strclr.c ft_strchr.c \
					ft_strcat.c ft_strdel.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_striter.c \
					ft_strequ.c ft_striteri.c ft_strlen.c ft_strjoin.c ft_strlcat.c \
					ft_strmap.c ft_strmapi.c ft_strncmp.c ft_strncat.c ft_strncpy.c \
					ft_strnew.c ft_strnequ.c ft_strnstr.c ft_strrchr.c ft_strstr.c \
					ft_strsub.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_strsplit.c \
					ft_lstnew.c ft_lstadd.c ft_lstiter.c ft_return_pos.c ft_itoabase.c \
					ft_longlongatoi.c checklist.c checklemin.c coresolver.c returnmap.c \
					get_next_line.c

SourceDir	=		sources/

CSRCS		=		$(addprefix $(SourceDir),$(SRCS))

COBJS		=		$(addprefix $(SourceDir),$(OBJS))

OBJS		=		$(SRCS:.c=.o)

FLAGS		=		-Wall -Werror -Wextra

CC			=		gcc

RM			=		rm -rf

all			:	$(NAME)

$(NAME)		:
	@$(CC) -c $(FLAGS) $(CSRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@$(CC) $(FLAGS) -o $(PROG) $(NAME) sources/main.c
	@echo "\033[33;32m=== Compilation (lem-in)\tDONE"

clean		:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "\033[33;32m=== Clean (lem-in)\t\tDONE"

fclean		:		clean
	@$(RM) $(PROG)
	@echo "\033[33;32m=== Fclean (lem-in)\t\tDONE"

re			:		fclean all

.PHONY : all re clean fclean
