# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:27:31 by apeposhi          #+#    #+#              #
#    Updated: 2023/01/13 16:39:01 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# HEADER

# info: header

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

define HEADER
	                      *     .--.
	                           / /  `
	          +               | |
	                 '         \ \__,
	             *          +   '--'  *
	                 +   /\\
	    +              .'  '.   *
	           *      /======\\      +
	                 ;:.  _   ;
	                 |:. (_)  |
	                 |:.  _   |
	       +         |:. (_)  |          *
	                 ;:.      ;
	               .' \:.    / `.
	              / .-'':._.'`-. \\
	              |/    /||\    \\|
	            _..--"""````"""--.._
	      _.-'``                    ``'-._
	    -'                                '-
	                                    _     _ 
	                                   | |   (_)
	  ____ ____   ____ ____   ___   ___| | _  _ 
	 / _  |  _ \ / _  |  _ \ / _ \ /___| || \| |
	( ( | | | | ( (/ /| | | | |_| |___ | | | | |
	 \_||_| ||_/ \____| ||_/ \___/(___/|_| |_|_|
	      |_|         |_|                       
endef
export HEADER

#PROJECT

NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -rf
CLEAR	= @clear
CMP		= 1
AR			= ar rcs

# FILE
SRC		= ./srcs/ft_printf.c
OBJ		= $(SRC:.c=.o)

# LIBFT
LIBFT_NAME	= libft.a
LIBFT	= libft

# PRINT

all: header $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

clean:
	@make clean -C $(LIBFT)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

norm: $(SRC)
	$(shell norminette $(SRC) | grep Error)

header:
	clear
	@echo "$$HEADER"

.SILENT:
	all

.PHONY: 
	all libftmake clean fclean re