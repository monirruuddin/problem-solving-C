#include <stdio.h>
int main() {

    int fullsec,h,m,s;
    scanf("%d",&fullsec);
    h = fullsec/3600;
    int j= fullsec%3600;
    m = j/60;
    s = fullsec%60;
    printf("%d:%d:%d",h,m,s);
    
    return 0;
}