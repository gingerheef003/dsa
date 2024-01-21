#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t p = fork();

	int x = 3;

	if(p == -1)
		printf("Error occured while calling fork()\n");
	else if(p == 0)
		printf("This is the child process with x = %d\n", ++x);
	else
		printf("This is the parent process with x = %d\n", --x);

	return 0;
}


/* Output:
This is the parent process with x = 2
This is the child process with x = 4

or

This is the child process with x = 4
This is the parent process with x = 2
*/
