# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iboeters <iboeters@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/15 13:21:22 by iboeters      #+#    #+#                  #
#    Updated: 2021/01/08 11:02:15 by iboeters      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert
SRCS =	main.cpp
OBJS = ${SRCS:%.cpp=%.o}
FLAGS= -Wall -Werror -Wextra -std=c++98

PINK = \033[38;2;255;204;213m
GREY = \033[38;2;100;100;100m
BG_GREY = \033[48;2;38;38;38m
RESET = \033[0m

all: $(NAME)

%.o:%.cpp
	@echo "$(GREY)$(BG_GREY)Compiling $<$(RESET)"
	@clang++ $(FLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREY)---------------------------------------------"
	@echo "$(PINK)Run executable: \"./$(NAME)\"$(RESET)"

clean:
	@echo "$(BG_GREY)$(GREY)Deleting $(OBJS)$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(BG_GREY)$(GREY)Deleting $(NAME)$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
