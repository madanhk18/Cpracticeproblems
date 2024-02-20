#include<stdio.h>
#include<stdlib.h>
//COMMIT THIS ON FEBRUARY 21//
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
    pid_t child_pid;

    child_pid=fork();
    if(child_pid<0)
    {
    perror("No work");
    exit(EXIT_FAILURE);
    }
    else{
        wait(NULL);
        printf(" \n Parent process (PID%d) executing...\n",getpid);
        printf("\nchild process (PID%d) executing...\n",child_pid);
    return 0;
    }

}