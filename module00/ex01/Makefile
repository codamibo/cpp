# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iboeters <iboeters@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/28 13:26:54 by iboeters      #+#    #+#                  #
#    Updated: 2020/07/28 22:30:58 by iboeters      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp Phonebook.class.cpp add_contact.cpp search_contacts.cpp

INC = Phonebook.class.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	clang++ -Wall -Werror -Wextra -std=c++98 $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
