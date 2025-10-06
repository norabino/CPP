NAME = BraiiiiiiinnnzzzZ
OBJDIR = objects
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp \
            src/newZombie.cpp \
            src/randomChump.cpp \
            src/Zombie.cpp

OBJECTS = $(SOURCES:src/%.cpp=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(FLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

dev : fclean
	git add . ; git diff --cached --quiet ; git commit -m "CPP01/ex00" ; git push --force

.PHONY: all clean fclean re