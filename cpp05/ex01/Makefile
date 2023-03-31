NAME		= Maggots

SRCS		= main.cpp src/Bureaucrat.cpp src/Form.cpp

CXX			= clang++

RM			= rm -rf

CXXFLAGS		= -O3 -g3 -Wall -Werror -Wextra -Wno-shadow -std=c++98 # Wshadow 

INCLUDES	= -I ./includes

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $(NAME) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
