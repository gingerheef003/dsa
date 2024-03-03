#include <stdio.h>
#include <stdbool.h>

/*
 * Write a program in C that can compute if the stack grows "up or down"
 * */

bool upordown(int *other) {
	int x;

	if(!other) return upordown(&x);
	else return &x > other;
}

int main() {
	printf("%s\n", upordown(NULL) ? "Up" : "Down");
	return 0;
}
