#include <stdlib.h>
#include <stdio.h>

#include "libfoo.h"

int main(int argc, char * argv[]) {
	const int a = 8;
	const int b = 5;

	const int sum = add(a, b);
	const int diff = subtract(a, b);

	printf("%d + %d = %d\n", a, b, sum);

	if (sum != a + b) {
		fprintf(stderr, "add() failed\n");
		exit(1);
	}

	printf("%d - %d = %d\n", a, b, diff);

	if (diff != a - b) {
		fprintf(stderr, "subtract() failed\n");
		exit(1);
	}

	printf("\nAll tests passed.\n");

	return 0;
} // End of main()
