NAME = zombie
CXX = c++            
CXXFLAGS = -Wall -Wextra -Werror 
SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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
