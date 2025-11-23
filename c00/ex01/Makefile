# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abismail <abismail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/22 15:02:57 by abismail          #+#    #+#              #
#    Updated: 2025/11/22 15:02:58 by abismail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = Phonebook
CXX = c++ -Wextra -Werror -Wall

SRCS = PhoneBook.cpp lpech.cpp Contact.cpp
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
