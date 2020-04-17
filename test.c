#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void ChildProcess(void);  /* child process prototype  */
void ParentProcess(void); /* parent process prototype */

void main(void)
{
    pid_t pid;

    pid = fork();
    if (pid == 0)
        ChildProcess();
    else
        ParentProcess();
}

void ChildProcess(void)
{
    for (int i = 0; i < 5; ++i)
        printf("Child: %d\n", i);
}

void ParentProcess(void)
{
    for (int i = 0; i < 5; ++i)
        printf("Parent: %d\n", i);
}