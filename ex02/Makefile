# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yumi <yumi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 14:27:08 by yumi              #+#    #+#              #
#    Updated: 2024/07/24 14:37:54 by yumi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp

INCS = -I.

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo '$(NAME) compiled!'

fclean: clean
	@rm -rf $(NAME)
	@echo '$(NAME) removed!'

clean:
	@rm -rf $(OBJS)
	@echo '$(OBJS) removed!'

re: fclean all

.PHONY: all clean fclean re
