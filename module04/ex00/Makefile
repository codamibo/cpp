# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iboeters <iboeters@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/09 11:29:07 by iboeters      #+#    #+#                  #
#    Updated: 2020/12/10 16:08:27 by iboeters      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = sorcerer
SRCS =	main.cpp\
		Sorcerer.cpp\
		Victim.cpp\
		Peon.cpp\
		Peon2.cpp
OBJS = ${SRCS:%.cpp=%.o}
FLAGS= -Wall -Werror -Wextra
COMPILE = clang++

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
	@echo "$(PINK)Run executable: \"./$(NAME)\""

clean:
	@echo "$(BG_GREY)$(GREY)Deleting $(OBJS)$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(BG_GREY)$(GREY)Deleting $(NAME)$(RESET)"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
