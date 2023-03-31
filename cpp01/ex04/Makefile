NAME		= loser

SRCS		= main.cpp

CXX			= c++

RM			= rm -rf

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
