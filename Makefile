# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 13:14:06 by pgiroux           #+#    #+#              #
#    Updated: 2024/10/22 14:15:50 by pgiroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server

CC = cc

CFLAGS = -Wall -Wextra -Werror -g 

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

FILE_CLIENT = client
FILE_SERVER = server

FILE_DIR = ./src/
OBJ_DIR = ./obj/

FILES_CLIENT = $(addprefix $(FILE_DIR), $(addsuffix .c, $(FILE_CLIENT)))
OBJ_CLIENT = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILE_CLIENT))) 

FILES_SERVER = $(addprefix $(FILE_DIR), $(addsuffix .c, $(FILE_SERVER)))
OBJ_SERVER = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILE_SERVER)))

all : $(CLIENT) $(SERVER)

$(OBJ_DIR)%.o: $(FILE_DIR)%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(CLIENT): $(LIBFT) $(OBJ_CLIENT)
	$(CC) $(CFLAGS)  $(OBJ_CLIENT) $(LIBFT) -o  $(CLIENT)

$(SERVER): $(LIBFT) $(OBJ_SERVER)
	$(CC) $(CFLAGS)  $(OBJ_SERVER) $(LIBFT) -o  $(SERVER)

$(LIBFT):
	@make -C $(LIBFT_PATH) all

clean :
	make clean -C ./libft
	rm -rf $(OBJ_DIR)

fclean : clean
	make fclean -C ./libft
	rm -f $(CLIENT)
	rm -f $(SERVER)

re : fclean all
	@./server

.PHONY : all clean fclean re
