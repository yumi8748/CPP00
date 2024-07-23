# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 14:47:33 by yu-chen           #+#    #+#              #
#    Updated: 2024/07/23 15:16:31 by yu-chen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = src/main.cpp src/Contact.cpp src/PhoneBook.cpp

INCS = inc

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	@$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo '$(NAME) compiled!'

fclean: clean
	@rm -rf $(NAME)
	@echo '$(NAME) removed!'

clean:
	@rm -rf $(OBJS)
	@echo '$(OBJS) removed!'

re: fclean all

.PHONY: all clean fclean re
