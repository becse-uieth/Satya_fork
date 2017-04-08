#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
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
	}
	else if( pid > 0)
	{
		printf("I am Parent with pid %d\n",(int)getpid());
	}

	printf("fork returend: %d\n",(int) pid);

	printf(" I am: %d\n",(int) getpid());
	
	return 0;
}

