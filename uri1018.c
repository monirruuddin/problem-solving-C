#include <stdio.h>
#include <math.h>

int main() {

    int inputNumber,a,b,c,d,e,f,g;
    scanf("%d",&inputNumber);

    printf("%d\n",inputNumber);
    a= inputNumber/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    
    int bb= inputNumber%100;
    b= bb/50;
    printf("%d nota(s) de R$ 50,00\n",b); 

    int cc= bb%50;
    c= cc/20;
    printf("%d nota(s) de R$ 20,00\n",c);

    int dd= cc%20;
    d= dd/10;
    printf("%d nota(s) de R$ 10,00\n",d);

    int ee= dd%10;
    e= ee/5;
    printf("%d nota(s) de R$ 5,00\n",e); 

    int ff= ee%5;
    f= ff/2;
    printf("%d nota(s) de R$ 2,00\n",f); 

    int gg= ff%2;
    g= gg/1;
    printf("%d nota(s) de R$ 1,00\n",g); 



return 0;
}