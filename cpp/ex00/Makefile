# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abismail <abismail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/22 15:03:01 by abismail          #+#    #+#              #
#    Updated: 2025/11/22 15:03:02 by abismail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = megaphone
CXX = c++ -Wextra -Werror -Wall

SRCS = Megaphone.cpp
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
