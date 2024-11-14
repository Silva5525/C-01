# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 18:09:33 by wdegraf           #+#    #+#              #
#    Updated: 2024/11/10 16:12:55 by wdegraf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := replace

SRC := $(wildcard *.cpp)
HEADS := $(wildcard *.hpp)

CC := c++
CPPFLAGS := -std=c++98 -Wall -Wextra -Werror 
#-g -fsanitize=address 

all: $(NAME)

$(NAME): $(SRC) $(HEADS)
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

-include $(SRC:.cpp=.d)

%.d: %.cpp
	@$(CC) $(CPPFLAGS) -MM $< > $@

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

run: all
	./$(NAME)

clean:
	@rm -f *.o *.d

fclean: clean
	@rm -f $(NAME)
	@rm -f *.replace

re: fclean all

.PHONY: all run clean fclean re
