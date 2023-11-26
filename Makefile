# .-----------------------------------------------.
# |       ___                 _                   |
# |      / __) _             (_)                  |
# |     | |__ | |_            _   ____  ____      |
# |     |  __)|  _)          | | / ___)/ ___)     |
# |     | |   | |__  _______ | || |   ( (___      |
# |     |_|    \___)(_______)|_||_|    \____)     |
# '-----------------------------------------------'

NAME = ircserv

src = ft_irc.o user.o channel.o
CC = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 
RM = rm -f

all: $(NAME)

$(NAME): $(src)  
	@$(CC) $(CXXFLAGS) $(src)  -o $(NAME)

$(src): ./inc/ft_irc.hpp
clean:
	@$(RM) $(src)

fclean: clean
	@$(RM) $(NAME)

re: fclean all