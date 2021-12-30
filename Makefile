CL = client

SR = server

PR = ./ft_printf/ft_printf.a

CFLAGS = -Wall -Wextra -Werror



all: $(PR) $(SR) $(CL)

$(SR): server.c $(PR)
	@gcc $(CFLAGS) server.c utils.c $(PR) -o $@
	@echo -------- server ready ---------


$(CL): client.c $(PR)
	@gcc $(CFLAGS) client.c utils.c $(PR) -o $@
	@echo -------- client ready ---------

$(PR):
	@make -C ./ft_printf

clean:
	@make clean -C ./ft_printf

fclean: clean
	@make fclean -C ./ft_printf
	rm -rf $(SR) $(CL)

re: fclean all

.PHONY: = all re clean fclean