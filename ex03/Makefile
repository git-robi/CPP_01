NAME = unnecessaryViolence
CXX = c++            
CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address
LDFLAGS = -fsanitize=address
SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

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
