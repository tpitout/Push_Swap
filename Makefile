# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpitout <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 19:41:05 by tpitout           #+#    #+#              #
#    Updated: 2018/08/17 19:41:40 by tpitout          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECK = checker

PS = push_swap

FLAGS = -Wall -Werror -Wextra

SRCS = srcs/checker_functions.c srcs/checker_functions2.c srcs/checker_functions3.c \
srcs/init.c srcs/check_cmd.c srcs/check_args.c srcs/sorting_small.c srcs/sorting_big.c \
srcs/assist.c

OBJS = checker_functions.o checker_functions2.o checker_functions3.o init.o \
check_cmd.o check_args.o sorting_small.o sorting_big.o assist.o

HEADERS = -I libft/includes -I includes/

LIB = libft/libft.a -lncurses

$(PS) :
	@make fclean -C libft/
	@make -C libft/
	@make clean -C libft/
	@gcc $(FLAGS) -c $(SRCS) srcs/push_swap.c $(HEADERS)
	@gcc $(FLAGS) $(OBJS) push_swap.o -o $(PS) $(LIB)
	@make clean
	@echo "\x1B[32mPUSH_SWAP compiled\x1B[0m"
	@make fclean -C libft/
	@make -C libft/
	@make clean -C libft/
	@gcc $(FLAGS) -c $(SRCS) srcs/main_checker.c $(HEADERS)
	@gcc $(FLAGS) $(OBJS) main_checker.o -o $(CHECK) $(LIB)
	@make clean
	@echo "\x1B[33mCHECKER compiled\x1B[0m"

all : $(PS)

clean :
	@rm -rf $(OBJS) main_checker.o push_swap.o

fclean : clean
	@make fclean -C libft/
	@rm -rf $(CHECK) $(PS)
	@echo "\x1B[35mCLEAN\x1B[0m"

re : fclean all
