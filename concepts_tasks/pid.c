#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid, my_parent_pid;

    my_pid = getpid();
    my_parent_pid = getppid();
    printf("The process id is: %u\n", my_pid);
    printf("The parent process id is: %u\n", my_parent_pid);
    return (0);
}