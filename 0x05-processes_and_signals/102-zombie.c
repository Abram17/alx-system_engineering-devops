#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - entry point
 *
 * Description: make five zombie processes
 *
 * Return: 0 when success
*/

int main(void)
{
	int i;
	pid_t pid;

	i = 0;
	while (i < 5)
	{
		pid = fork();
		if (pid)
			printf("Zombie process created, PID: %i\n", pid);
		else
			exit(0);
		i++;
	}
	sleep(100);
	return (0);
}
