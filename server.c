#include"minitalk.h"


void	handler(int signum)
{
	static char c = 0xFF;
	static int bit = 0;

	if (signum == SIGUSR1)
	{
		c |= 128 >> bit; 
	}
	else if (signum == SIGUSR2)
	{
		c ^= 128 >> bit;
	}
	bit++;
	if(bit == 9)
	{
		ft_printf("%c",c);
		bit = 0;
		c = 0xFF;
	}
}

int main ()
{
	int pid = getpid();
	ft_printf("pid :%d\n" ,pid);

	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
	{
		pause();
	}
}