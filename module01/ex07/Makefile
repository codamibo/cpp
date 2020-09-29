# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iboeters <iboeters@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/28 09:05:29 by iboeters      #+#    #+#                  #
#    Updated: 2020/09/30 00:02:43 by iboeters      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

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