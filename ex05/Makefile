# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 13:26:34 by rgiambon          #+#    #+#              #
#    Updated: 2025/02/03 13:26:35 by rgiambon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CXX = c++            
CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address
LDFLAGS = -fsanitize=address
SOURCES = main.cpp Harl.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = Harl.hpp

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
