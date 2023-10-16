# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 20:29:27 by moduwole          #+#    #+#              #
#    Updated: 2023/06/18 20:29:27 by moduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRC_DIR	=	src
SRCS	=	Contact.cpp PhoneBook.cpp main.cpp

SRC		=	$(addprefix $(SRC_DIR)/, $(SRCS))
OBJ		=	$(patsubst %.cpp, %.o, $(SRCS))

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re