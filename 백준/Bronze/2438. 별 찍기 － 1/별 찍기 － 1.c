#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	for (int j = 1;j <= a;j++) {
		for (int i = 1;i <= j;i++) {
			printf("*");

		}
		printf("\n");
	}


	


	return 0;
}