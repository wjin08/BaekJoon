#include <stdio.h>

int main()
{
    int n = 1, m = 0,i=0;
    int arr[30] = { 0 };


    for (n = 0;n <= 27;n++) {
        scanf("%d", &m);
        arr[m-1] = 1;

    }

    for (i = 0;i <= 29;i++) {
        if (arr[i] == 0) {
            printf("%d\n", i+1);
        }
    }

    return 0;
}