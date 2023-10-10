# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 20:12:20 by alnavarr          #+#    #+#              #
#    Updated: 2023/10/09 17:30:30 by alnavarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_printf.h
MKFL	= Makefile
NAME = libftprintf.a

OBJ_DIR = obj/
	
SRCS	=	ftprintf.c	\
				ft_printchar.c\
	   			ft_printstr.c\
				ft_printpnts.c\
				ft_print_digits.c\
				ft_print_unsigned.c\
				ft_printhexamin.c\
				ft_printhexamax.c

CC = gcc
RM = rm -rf
MP	= mkdir p

CFLAGS = -Werror -Wall -Wextra -W -O3 -Ofast 

LIBC = ar -rcs

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEP	= $(addsuffix .d, $(basename $(OBJ)))

$(OBJ_DIR)%.o: %.c $(MKFL)
	@$(MP) $(dir $@)
	${CC} ${CFLAGS} -MMD -I ./ -c $< -o $@

all:
	@$(MAKE) $(NAME)

$(NAME):: $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

-include $(DEP)

clean:
	$(RM) $(OBJ)

fclean:
	@$(MAKE) clean
	$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
