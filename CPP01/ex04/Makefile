NAME = Replace
OBJDIR = objects
FLAGS = -Wall -Wextra -Werror -std=c++98 -I.
SOURCES = main.cpp \
	src/checkInput.cpp \
	src/Replace.cpp

OBJECTS = $(SOURCES:.cpp=.o)
OBJECTS := $(addprefix $(OBJDIR)/, $(notdir $(OBJECTS)))

$(OBJDIR)/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	c++ $(FLAGS) -c $< -o $@

$(OBJDIR)/%.o: %.cpp
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
	git add . ; git diff --cached --quiet ; git commit -m "CPP01/ex04" ; git push --force

.PHONY: all clean fclean re