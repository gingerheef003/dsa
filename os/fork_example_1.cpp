#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	fork();
	fork();
	fork();
	
	printf("This process is created by fork() system call\n");
	
	return 0;
}

/* Output:
This process is created by fork() system call
This process is created by fork() system call
This process is created by fork() system call
This process is created by fork() system call
This process is created by fork() system call
This process is created by fork() system call
This process is created by fork() system call
This process is created by fork() system call
*/
