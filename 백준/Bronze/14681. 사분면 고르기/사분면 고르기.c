#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y < 0) {
			printf("4");
		}
		if (y > 0) {
			printf("1");
		}
	
	
	}

	if (x < 0) {
		if (y < 0) {
			printf("3");
		}
		if (y > 0) {
			printf("2");
		}
	
	
	
	}




	return 0;
}