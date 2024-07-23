# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 14:25:29 by yu-chen           #+#    #+#              #
#    Updated: 2024/07/23 14:24:44 by yu-chen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(SRCS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo '$(NAME) compiled!'

fclean: clean
	@rm -rf $(NAME)
	@echo '$(NAME) removed!'

clean:
	@rm -rf $(OBJS)
	@echo '$(OBJS) removed!'

re: fclean all

.phony: all clean fclean re