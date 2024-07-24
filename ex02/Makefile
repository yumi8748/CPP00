# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 15:59:23 by yu-chen           #+#    #+#              #
#    Updated: 2024/07/24 16:01:24 by yu-chen          ###   ########.fr        #
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
