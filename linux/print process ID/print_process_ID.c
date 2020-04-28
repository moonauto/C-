#include<apue.h>

int main(void)
{
	printf("Hello world from Process ID %ld\n",(long)getpid());
	exit(0);
}
