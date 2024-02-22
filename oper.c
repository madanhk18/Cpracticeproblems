#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t child_pid;
    child_pid=fork();
    if(child_pid<0)
    {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }
    else{
        wait(NULL);
        printf(" \n Parent process (PID%d) is executing ...",getpid());
        printf("\n Child process (PID%d) is executing ...",child_pid);
    }
    return 0;
}