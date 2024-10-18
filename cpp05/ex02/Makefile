NAME = Noyouneedform28Bnot28C
SRC = main Bureaucrat AForm PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm

CC = c++ -std=c++98
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
