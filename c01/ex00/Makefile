
NAME = Zombie
SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++ -Wall -Werror -Wextra -std=c++98
 
RM= rm -rf

all:$(NAME)


$(NAME):$(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean re fclean 
