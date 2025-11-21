Name = Phonebook
CXX = c++ -Wextra -Werror -Wall

SRCS = test.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	$(CXX) $(OBJS) -o $(Name)

clean:
	rm -rf $(OBJS) 
fclean :clean
	rm -rf $(Name)
re:fclean all

.PHONY: all clean re fclean 
