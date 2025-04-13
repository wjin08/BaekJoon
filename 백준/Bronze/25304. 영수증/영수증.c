#include <stdio.h>

int main(void)
{	
	int tot, qty;
	scanf("%d %d", &tot, &qty);
	int aa = 0;

	for (int i = 1;i <= qty;i++) {
		int price, aqty;
		scanf("%d %d", &price, &aqty);

		int mix = price * aqty;
		
		aa += mix;
		
	
	
	}
	if (aa == tot) {
		printf("Yes");


	}
	else {
		printf("No");
	}


	return 0;
}