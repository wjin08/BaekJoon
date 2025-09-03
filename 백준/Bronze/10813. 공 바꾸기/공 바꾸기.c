#include <stdio.h>

int main()
{
    int n = 0, m = 0, i = 0, j = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    int arr[100] = { 0 };
    for (int d = 1;d <= n;d++) {
        arr[d - 1] = d;
    }
    for (int f = 0; f < m;f++) {
        scanf("%d", &i);
        scanf("%d", &j);
        
        int temp = 0;
        temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
        
        

    }

    for (int g = 0;g < n;g++) {
        printf("%d ", arr[g]);
    }
    return 0;
}