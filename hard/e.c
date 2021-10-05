#include <stdio.h>
int main() {
    int i, n,k;
    int arr[100];

    scanf("%d %d", &n,&k);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    int f=0;
    if (arr[0]<k){
        printf("%d\n", f);
    }else{
    printf("%d\n", arr[0]-k);
    }
    

    return 0;
}