int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	int c = b / 100;
	int d = b % 100 / 10;
	int e = b % 10;

	printf("%d\n", a * e);
	printf("%d\n", a * d);
	printf("%d\n", a * c);
	printf("%d\n", a * b);



	return 0;
}