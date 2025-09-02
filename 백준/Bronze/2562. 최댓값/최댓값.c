#include <stdio.h>

int main()
{

    int arr[9];



    for (int i = 0;i < 9;i++) {
        scanf("%d", &arr[i]);

    }
    
    int max = arr[0];
    int num;
    for (int i = 0;i < 9;i++) {
        if (arr[i] > max) {
            max = arr[i];
            
            num = i+1;
        }
    }
    printf("%d\n%d", max, num);
    return 0;
}