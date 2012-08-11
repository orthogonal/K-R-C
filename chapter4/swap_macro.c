#include <stdio.h>
#include <ctype.h>

#define swap(t, x, y) for(;;){t tmp = x; x = y; y = tmp; break;}

main()
{
	int x = 2;
	int y = 4;
	swap(int, x, y);
	printf("x = %d, y = %d\n", x, y);
	return 0;
}