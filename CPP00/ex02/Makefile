# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 10:05:20 by moduwole          #+#    #+#              #
#    Updated: 2023/07/10 10:05:20 by moduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	account

SRC	=	$(wildcard *.cpp)
OBJ	=	$(SRC:.cpp=.o)

CC	=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re