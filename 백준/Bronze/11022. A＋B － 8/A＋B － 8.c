#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	for (int i = 1;i <= a;i++) {
		int k, l;
		scanf("%d %d", &k, &l);
		printf("Case #%d: %d + %d = %d\n", i,k,l, k + l);

	}
	return 0;
}