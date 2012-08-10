#include <stdio.h>
#include <ctype.h>
#include <time.h>

/* Exercise 3-1:  Write a version of binary search with only one test inside the loop. */

int binsearch(int x, int v[], int n);

main()
{
	time_t start = clock();
	int v[] = {0, 2, 3, 5, 9, 11};
	printf("The %d is at index %d\n", 5, binsearch(5, v, 6));
	printf("Running time was %f seconds\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low = 0, high = n - 1, mid;
	while (low <= high)
		if (x < v[mid = (low + high) / 2])
			high = mid - 1;
		else
			low = mid + 1;
	return (v[high] == x) ? high : -1;
}

