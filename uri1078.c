#include <stdio.h>
int main() {
    int i,run,number;
    scanf("%d",&number);
    for (i = 1; i <= 10; i++){
        run =i*number;
        printf("%d x %d = %d\n",i,number,run);
    }
    
    return 0;
}