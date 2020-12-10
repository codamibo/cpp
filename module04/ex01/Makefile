# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iboeters <iboeters@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/10 10:23:23 by iboeters      #+#    #+#                  #
#    Updated: 2020/12/10 13:07:24 by iboeters      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = wasteland
SRCS =	main.cpp\
		AWeapon.cpp\
		PlasmaRifle.cpp \
		PowerFist.cpp\
		Enemy.cpp\
		SuperMutant.cpp\
		RadScorpion.cpp\
		Character.cpp
OBJS = ${SRCS:%.cpp=%.o}
FLAGS= -Wall -Werror -Wextra
COMPILE = clang++

WHITE = \033[38;2;255;204;213m
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
	@echo "$(WHITE)Run executable: \"./$(NAME)\""

clean:
	@echo "$(BG_GREY)$(GREY)Deleting $(OBJS)$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(BG_GREY)$(GREY)Deleting $(NAME)$(RESET)"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
