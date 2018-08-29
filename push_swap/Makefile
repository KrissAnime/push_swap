# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbester <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/07 08:38:53 by cbester           #+#    #+#              #
#    Updated: 2018/08/07 13:57:27 by cbester          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH = push_swap
CHECK = checker

C_DIR = ./check_inc/
P_DIR = ./push_inc/

LIBRARY_NAME = libft.a
LIBRARY_DIR = ./libft/
LIBRARY = $(addprefix $(LIBRARY_DIR), $(LIBRARY_NAME))

FLAGS = -Wall -Wextra -Werror

CHECK_FUNC = init.c push_to_a.c r_both.c r_stack.c swap_both.c validin.c\
			  rr_both.c rr_stack.c swap_a.c swap_b.c sort_in.c push_to_b.c\
			  shift.c check_main.c

PUSH_FUNC = init.c push_to_a.c r_both.c r_stack.c swap_both.c validin.c\
			 rr_both.c rr_stack.c swap_a.c swap_b.c push_to_b.c minisort_a.c\
			 push_main.c check.c simple_sort.c check_stack.c test.c\
			 minisort_b.c

CHECK_FILES = $(addprefix $(C_DIR), $(CHECK_FUNC))
PUSH_FILES = $(addprefix $(P_DIR), $(PUSH_FUNC))

CHECK_OBJECTS = $(CHECK_FILES:.c=.o)
PUSH_OBJECTS = $(PUSH_FILES:.c=.o)

all: $(CHECK) $(PUSH)

$(CHECK): $(LIBRARY_NAME) $(CHECK_OBJECTS)
	@gcc $(FLAGS) -o $(CHECK) $(CHECK_OBJECTS) $(LIBRARY)
	@echo "\033[37mChecker Built!\033[0m"

$(PUSH): $(LIBRARY_NAME) $(PUSH_OBJECTS)
	@gcc $(FLAGS) -o $(PUSH) $(PUSH_OBJECTS) $(LIBRARY)
	@echo "\033[37mPush_Swap Built!\033[0m"

$(LIBRARY_NAME):
	@make -C $(LIBRARY_DIR)

%.o: %.c
	@echo "\033[36mCreating Objects $@\033[0m"
	@gcc $(FLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
	@echo "\033[33mRemoving Objects...\033[0m"
	@/bin/rm -f $(CHECK_OBJECTS)
	@/bin/rm -f $(PUSH_OBJECTS)
	@make clean -C $(LIBRARY_DIR)
	@echo "\033[33mClean complete!\033[0m"

fclean:
	@echo "\033[33mRemoving Objects...\033[0m"
	@/bin/rm -f $(CHECK_OBJECTS) $(PUSH_OBJECTS)
	@/bin/rm -f $(CHECK) $(PUSH)
	@make fclean -C $(LIBRARY_DIR)
	@echo "\033[33mFclean complete!\033[0m"

re: fclean all
