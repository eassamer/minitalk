#include"minitalk.h"

void	send_string(int pid , char *str)
{
	int  i ;
	int bit;
	
	i = 0;
	
	if (!str)
		exit(1);
	while (str[i])
	{
		bit = 0;
		while (bit < 9)
		{
			if (str[i] & (128 >> bit))
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(1);
			}
			else if (kill(pid, SIGUSR2) == -1)
				exit(1);
			
			bit++;
			usleep(300);
		}
		i++;
	}
	
}

int main (int ac,char **av)
{
	if (ac == 3 && str_isdigit(av[1]) && av[2][0] != 0)
	{
		int pid;
		pid = ft_atoi(av[1]);
		send_string(pid, av[2]);
	}
	else
		ft_printf("3ndk chi ghalat");
}