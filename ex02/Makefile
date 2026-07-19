CC = g++
FLASH = -Wall -Wextra -Werror -g
CFLAGS = -std=c++98
SRCS = $(addsuffix .cpp, main)
OBJS = $(SRCS:.cpp=.o)
NAME = ex02
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLASH) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(FLASH) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re