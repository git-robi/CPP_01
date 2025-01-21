NAME = Harl
CXX = c++            
CXXFLAGS = -Wall -Wextra -Werror 
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
