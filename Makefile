# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:27:31 by apeposhi          #+#    #+#              #
#    Updated: 2022/11/29 10:28:11 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME=libftprint.a
SRCS= 

OBJS=$(SRCS:.c=.o)


BONUS_OBJS = $(BONUSES:.c=.o)

all: $(NAME)

$(NAME): $(SRCS) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

norm: $(SRCS)
	$(shell norminette $(SRCS) | grep Error)

re: fclean all
