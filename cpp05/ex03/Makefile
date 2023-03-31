NAME		= Form28B

SRCS		= main.cpp src/Bureaucrat.cpp \
				src/AForm.cpp \
				src/PresidentialPardonForm.cpp \
				src/RobotomyRequestForm.cpp \
				src/ShrubberyCreationForm.cpp \
				src/Intern.cpp

CXX			= clang++

RM			= rm -rf

CXXFLAGS		= -g3 -Wall -Werror -Wextra -Wno-shadow -std=c++98 # Wshadow 

INCLUDES	= -I ./includes

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $(NAME) 

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(RM) $(OBJS) *_shrubbery

fclean:		clean
				@$(RM) $(NAME)

re:			fclean all
