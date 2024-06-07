NAME = megaphone
SRC = Megaphone

CC = c++ -std=c++98
RM =rm -f
CFLAGS = -Wall -Werror -Wextra 


all:$(NAME)

$(NAME): $(SRC:=.o)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
