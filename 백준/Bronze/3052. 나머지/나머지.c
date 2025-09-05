#include <stdio.h>

int main()
{
    int n = 1, m = 0, i = 0;            int d = 0;
    int arr[1000] = { 0 };


    for (n = 0;n <= 9;n++) {
        scanf("%d", &m);
        arr[n] = m % 42;

        i=0;
        

        for (int j = 1;j <= n;j++) {
            if (arr[n] == arr[n - j]) {
                i=1;
            }
        }

        if (!i) d++;

    }

    printf("%d", d);

    return 0;
}
