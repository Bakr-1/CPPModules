NAME		= DiamondTrap

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

CXX			= clang++

RM			= rm -rf

CXXFLAGS		= -O3 -g3 -Wall -Werror -Wextra -Wno-shadow -std=c++98 # Wshadow 

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
