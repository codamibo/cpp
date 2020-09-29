# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iboeters <iboeters@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/30 00:26:50 by iboeters      #+#    #+#                  #
#    Updated: 2020/09/30 00:30:22 by iboeters      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = cato9tails

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Werror -Wextra $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
