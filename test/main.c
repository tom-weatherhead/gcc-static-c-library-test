#include <stdlib.h>
#include <stdio.h>

#include "libfoo.h"

int main(int argc, char * argv[]) {
	const int a = 8;
	const int b = 5;

	const int sum = add(a, b);

	printf("%d + %d = %d\n", a, b, sum);

	return 0;
} // End of main()
