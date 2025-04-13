#include <stdio.h>

int main(void)
{
	long long year;
	scanf("%lld", &year);

	if (year % 4 == 0) {
		if (year % 400 == 0) {
			printf("1");
		}

		else if (year % 100 != 0) {
			printf("1");
		}
		else {
			printf("0");
		}

	}

	else {
		printf("0");
	}


	return 0;
}