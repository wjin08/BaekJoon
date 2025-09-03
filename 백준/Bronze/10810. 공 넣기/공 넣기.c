#include <stdio.h>

int main()
{
    int n = 0, m = 0,i=0,j=0,k=0;
    scanf("%d", &n);
    scanf("%d", &m);

    int arr[100] = {0};

    for (int f = 0; f < m;f++) {
        scanf("%d", &i);
        scanf("%d", &j);
        scanf("%d", &k);

        for (int t = i;t <= j;t++) {
            arr[t - 1] = k;
        }
        
    }

    for (int g = 0;g < n;g++) {
        printf("%d ", arr[g]);
    }
    return 0;
}