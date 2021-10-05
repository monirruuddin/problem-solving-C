#include <stdio.h>
int main() {

    int *p, *q;
    int i = 10;
    p = &i;
    q = p;

    printf("%d %d %d", *p, *q, i);  

    return 0;
}



