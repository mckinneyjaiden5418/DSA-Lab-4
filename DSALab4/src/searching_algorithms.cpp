#include "../include/searching_algorithms.h"

namespace iterative {
	int binary_search(const int arr[], int size, int target) {
		int left = 0;
		int right = size - 1;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (arr[mid] == target) return mid;
			else if (arr[mid] < target) left = mid + 1;
			else right = mid - 1;
		}

		return -1;
	}
}

namespace recursive {
	int binary_search_helper(const int arr[], int left, int right, int target) {
		if (left > right) return -1;

		int mid = left + (right - left) / 2;

		if (arr[mid] == target) return mid;
		else if (arr[mid] < target) return binary_search_helper(arr, mid + 1, right, target);
		else return binary_search_helper(arr, left, mid - 1, target);
	}

	int binary_search(const int arr[], int size, int target) {
		return binary_search_helper(arr, 0, size - 1, target);
	}
}