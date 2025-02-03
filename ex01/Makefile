# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 12:44:19 by rgiambon          #+#    #+#              #
#    Updated: 2025/02/03 12:44:21 by rgiambon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CXX = c++            
CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address
LDFLAGS = -fsanitize=address
SOURCES = main.cpp Zombie.cpp zombieHorde.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
