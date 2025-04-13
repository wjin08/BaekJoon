#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);
	int RM = M - 45;
	if (RM < 0) {

		if (H>0) {

			printf("%d %d", H - 1, RM + 60);
		}
		


		if (H==0) {
			printf("23 %d", RM + 60);
		
		}

	
	}

	if (RM >= 0) {
		printf("%d %d", H, RM);
	
	
	}






	return 0;
}