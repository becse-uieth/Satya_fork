#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main( int argc, char *argv[])
{
	printf("I am:%d\n",(int) getpid());

	pid_t pid = fork();
	if(pid == -1)
	{
		printf("Fork Failed");
	}
	else if(pid == 0)
	{
		printf("I am child with pid %d\n",(int)getpid());
		sleep(5);
		printf("child is exiting....\n");
	}
	// we must be the parent
	
		printf("I am Parent,waiting for child to end\n");
		wait(NULL);
		printf("parent ending..\n");
		return 0;
}

