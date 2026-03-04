#include "algebra.h"

namespace recursive {
	int sum_n(int n) {
		if (n <= 0) return 0;
		if (n == 1) return 1;

		return n + sum_n(n - 1);
	}

	int factorial(int n) {
		if (n <= 1) return 1;

		return n * factorial(n - 1);
	}

	int fibonacci(int n) {
		if (n < 0) return -1; // -1 indicating invalid.
		if (n == 0) return 0;
		if (n == 1) return 1;
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}