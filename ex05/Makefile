# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 13:54:54 by vstockma          #+#    #+#              #
#    Updated: 2023/04/24 11:01:18 by vstockma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

FLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
