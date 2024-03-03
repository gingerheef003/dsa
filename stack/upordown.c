#include <stdio.h>
#include <stdbool.h>

/*
 * Write a program in C that can compute if the stack grows "up or down"
 * */

bool upordown() {
	int x, y;

	if(&x > &y) return true;
	else return false;
}

int main() {
	printf("%s\n", upordown() ? "Up" : "Down");
	return 0;
}
