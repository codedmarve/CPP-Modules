# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 21:59:37 by moduwole          #+#    #+#              #
#    Updated: 2023/11/29 22:00:03 by moduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc

SRC	=	$(wildcard *.cpp)
OBJ	=	$(SRC:.cpp=.o)

CC	=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re