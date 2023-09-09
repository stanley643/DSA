#include<stdio.h>
#include<unistd.h>

int main()
{
        pid_t processId, pprocessId;

        printf("This is a parent process id\n");
        pprocessId = getppid();
        printf("%u\n", pprocessId);

        printf("This is a child process id\n");
        processId = getpid();
        printf("%u\n", processId);

        return 0;
}

