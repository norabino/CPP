NAME = Harl_2.0
OBJDIR = objects
FLAGS = -Wall -Wextra -Werror -std=c++98 -I.
SOURCES = main.cpp \
	src/Harl.cpp \

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

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

dev : fclean
	git add . ; git diff --cached --quiet ; git commit -m "CPP01/ex05" ; git push --force

.PHONY: all clean fclean re