#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int result = 2,like = 2;
    for(int i = 2; i <= n; i++){
        like*=3;
        like = like/2;
        result+=like;
    }
    printf("%d",result);
    return 0;
}