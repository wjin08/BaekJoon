#include <stdio.h>

int main()
{
    int n;
    int arr[101];
    int v;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&v);
    int f = 0;
    for (int i = 1;i <= n;i++) {

        
    
        if (arr[i] == v) {
            f+=1;
            
        }
        
    }
    printf("%d\n", f);
    return 0;
}
