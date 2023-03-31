NAME		= phonebook

SRCS		= main.cpp phonebook.cpp contact.cpp

CXX			= c++

RM			= rm -rf

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98

OBJS		= $(SRCS:.cpp=.o)



all:		$(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
