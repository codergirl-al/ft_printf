# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:27:31 by apeposhi          #+#    #+#              #
#    Updated: 2023/01/09 14:43:38 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# HEADER

info: header

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

NAME	= libftprint.a
CC		=cc
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f
CLEAR	= @clear
FILE	= $(shell ls -l src/ | grep -F .c | wc -l)
CMP		= 1

# FILE
SRC		= ./src/ft_printf.c
OBJ		= $(SRC:.c=.o)

# LIBFT
LIBFT_PATH	= ./libft --no-print-directory
LIBFT_NAME	= ./libft/libft.a

# COLOR
GREEN	= \033[38;5;76m
RED		= \033[38;5;160m
YELLOW	= \033[38;5;226m
ORANGE	= \033[38;5;202m
PURPLE	= \033[38;5;213m
LBLUE	= \033[38;5;51m
BLUE	= \033[38;5;117m
INDI	= \033[38;5;99m
RESET	= \033[00m

# PRINT
RNBW	= @printf "$(PURPLE)Printf library is ready to use$(RESET)\n"

header:
	clear
	@echo "$$HEADER"

all: header $(LIBFT_NAME) $(NAME)

%.o: %.c
	@printf "\r$(LBLUE)[$(RESET)+$(LBLUE)] $(RESET)Adding $(GREEN)$<$(BLUE) [$(RESET)$(CMP)$(BLUE)/$(RESET)$(FILE)$(BLUE)]$(RESET)\n\r"
	$(CC) $(CFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))
	
$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(OBJ) 
	@ar rcsT $(NAME) $(OBJ) $(LIBFT_NAME)
	$(RNBW)

clean:
	@make clean -C $(LIBFT_PATH)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

norm: $(SRCS)
	$(shell norminette $(SRCS) | grep Error)

.SILENT:
	all
.PHONY: 
	all libftmake clean fclean re