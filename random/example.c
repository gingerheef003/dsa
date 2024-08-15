#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	printf("This section prints the same random integers (0-19) for every execution:\n");
	for(int i = 0; i < 5; i++) {
		printf("%d ", rand() % 20);
	}
	printf("\n----------\n");

	float f = 5.0;
	printf("This sekction prints the same random floats (0-%f) for every execution:\n", f);
	for(int i = 0; i < 5; i++) {
		printf("%f ", ((float) rand() / RAND_MAX * f));
	}
	printf("\n----------\n");
	
	printf("This section prints the different random integers (0-19) for every execution:\n");
	srand(time(NULL));
	for(int i = 0; i < 5; i++) {
		printf("%d ", rand() % 20);
	}
	printf("\n----------\n");

}
