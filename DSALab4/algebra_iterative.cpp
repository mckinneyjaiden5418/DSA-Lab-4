#include "algebra.h"

namespace iterative{
	int sum_n(int n) {
		int total = 0;
		for (int i = 0; i < n; i++) {
			total += i;
		}

		return total;
	}

	int factorial(int n) {
		int total = 1;
		for (int i = 1; i <= n; i++) {
			total *= i;
		}

		return total;
	}

	int fibonacci(int n) {
		if (n < 0) return -1; // -1 indicating invalid.
		if (n == 0) return 0;
		if (n == 1) return 1;

		int a = 0, b = 1, c;
		for (int i = 2; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return b;
	}
}