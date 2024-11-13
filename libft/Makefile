# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 17:00:17 by pgiroux           #+#    #+#              #
#    Updated: 2024/10/21 14:02:01 by pgiroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror


IS = ft_isalnum ft_isalpha ft_isascii ft_isprint ft_isdigit
LST = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap
MEM = ft_memcmp ft_memmove ft_memchr ft_memcpy ft_memset
OTHER =	ft_bzero ft_atoi ft_calloc ft_split ft_itoa ft_substr ft_free
PUT = ft_putchar_fd ft_putstr_fd ft_putnbr_fd ft_putendl_fd
STR = ft_strchr ft_strlen ft_strnstr ft_strlcpy ft_strncmp ft_strrchr ft_strlcat ft_strdup ft_strjoin ft_strtrim ft_strmapi ft_striteri
TO = ft_tolower ft_toupper
GNL = ft_check ft_clearbuffer ft_init ft_strjoin_gnl get_next_line
PRINTF = ft_countnb_long ft_printf ft_printpointer ft_printunsigned ft_putchar ft_putnbr ft_putnbrbase ft_putstr

IS_DIR = ./ft_is/
LST_DIR = ./ft_lst/
MEM_DIR = ./ft_mem/
OTHER_DIR = ./ft_other/
PUT_DIR = ./ft_put/
STR_DIR = ./ft_str/
TO_DIR = ./ft_to/
GNL_DIR = ./get_next_line/
PRINTF_DIR = ./printf/
OBJ_DIR = ./obj/

FILES = $(addprefix $(IS_DIR), $(addsuffix .c, $(IS))) $(addprefix $(LST_DIR), $(addsuffix .c, $(LST))) $(addprefix $(MEM_DIR), $(addsuffix .c, $(MEM))) $(addprefix $(FILE_DIR), $(addsuffix .c, $(OTHER)))  $(addprefix $(PUT_DIR), $(addsuffix .c, $(PUT))) $(addprefix $(STR_DIR), $(addsuffix .c, $(STR))) $(addprefix $(TO_DIR), $(addsuffix .c, $(TO))) $(addprefix $(GNL_DIR), $(addsuffix .c, $(GNL))) $(addprefix $(PRINTF_DIR), $(addsuffix .c, $(PRINTF)))
OBJS_FILES = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(IS))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(LST))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(MEM))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(OTHER))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(PUT))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(STR)))  $(addprefix $(OBJ_DIR), $(addsuffix .o, $(TO))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(GNL))) $(addprefix $(OBJ_DIR), $(addsuffix .o, $(PRINTF)))

OBJS = $(OBJS_FILES)


$(OBJ_DIR)%.o: $(IS_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(LST_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(MEM_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(OTHER_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(PUT_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(STR_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(STR_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(TO_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(GNL_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
$(OBJ_DIR)%.o: $(PRINTF_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	
$(NAME) : $(OBJS)
	@ar rc $(NAME) $(OBJS)
	
all : $(NAME)

clean :
	@rm -rf $(OBJ_DIR) 

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
