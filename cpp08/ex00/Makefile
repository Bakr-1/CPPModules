NAME		= easyfind

SRCS		= main.cpp

CXX			= clang++

RM			= rm -rf

CXXFLAGS		= -g3 -Wall -Werror -Wextra -std=c++98

INCLUDES	= -I ./includes

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $(NAME)
	@printf "\033[32m[ ✔ ] %s\n\033[0m" "Compiled"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
			@$(RM) $(OBJS)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean all
