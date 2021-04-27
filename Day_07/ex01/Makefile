NAME = main
EXEC = iter
CC        =    clang++ -Wall -Wextra -Werror -O3 -g3 -std=c++98 -Wconversion

# CLASS = whatever

SRCC = $(addsuffix .cpp,$(CLASS))
# INCC = $(CLASS).hpp

# OBJC    =    $(SRCC:%.cpp=%.o)
# LIB = $(NAME).a

all:	$(NAME)


%.o:	%.cpp
	$(CC) -o $@ -c $<

$(NAME):	Makefile
	$(CC) $(NAME).cpp  -I. $(SRCC) -o $(EXEC)

test:	re $(NAME)
	./$(EXEC)

clean:
	@rm -f $(OBJC)

fclean:		clean
	@rm -f $(NAME)

bonus:	all

re: fclean all

.PHONY:    all clean fclean re bonus test
