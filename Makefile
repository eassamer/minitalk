CL = client

SR = server

PR = ./ft_printf/ft_printf.a

CFLAGS = -Wall -Wextra -Werror



all: $(PR) $(SR) $(CL)

$(SR): server.c $(PR)
	@gcc $(CFLAGS) server.c utils.c $(PR) -o $@
	@echo -------- ready ---------


$(CL): client.c $(PR)
	@gcc $(CFLAGS) client.c utils.c $(PR) -o $@
	@echo -------- ready ---------

$(PR):
	@make -C ./ft_printf

clean:
	@make clean -C ./ft_printf

fclean: clean
	rm -rf $(SR) $(CL)

re: fclean all

.PHONY: = all re clean fclean