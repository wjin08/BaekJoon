#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	for (int i = 1;i <= a;i++) {
		int k, l;
		scanf("%d %d", &k, &l);
		printf("%d\n", k + l);

	}



	return 0;
}