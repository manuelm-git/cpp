NAME = Abstractclass
SRC = main Brain Animal Dog Cat WrongAnimal WrongCat WrongDog 

CC = c++ -std=c++98
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I./

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
