NAME = Bureaucrat
OBJDIR = objects
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = src/main.cpp \
		src/Bureaucrat.cpp \
		src/AForm.cpp \
		src/ShrubberyCreationForm.cpp \
		src/RobotomyRequestForm.cpp \
		src/PresidentialPardonForm.cpp

OBJECTS = $(SOURCES:src/%.cpp=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJDIR)
#	rm -rf *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all

dev : fclean
	git add . ; git diff --cached --quiet ; git commit -m "CPP05/ex02" ; git push --force

.PHONY: all clean fclean re