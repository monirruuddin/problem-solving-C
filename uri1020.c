#include <stdio.h>
int main() {

    int days,y,m,d,remainder;
    scanf("%d",&days);
    y= days/365;
    remainder= days%365;
    m = remainder/30;
    d = remainder%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);

return 0;
}