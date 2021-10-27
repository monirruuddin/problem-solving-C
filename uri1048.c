#include <stdio.h>
int main() {


float first,a,second,third,fourth,fifth;
scanf("%f",&a);
first= ((a/100)*15);
second = ((a/100)*12);
third = ((a/100)*10);
fourth = ((a/100)*7);
fifth = ((a/100)*4);

if (a>=0 && a<=400.00){
    printf("Novo salario: %.2f\n",a+first);
    printf("Reajuste ganho: %.2f\n",first);
    printf("Em percentual: 15 %%\n");
}else if(a>=400.01 && a<=800.00){
    printf("Novo salario: %.2f\n",a+second);
    printf("Reajuste ganho: %.2f\n",second);
    printf("Em percentual: 12 %%\n");
}else if(a>=800.01 && a<=1200.00){
    printf("Novo salario: %.2f\n",a+third);
    printf("Reajuste ganho: %.2f\n",third);
    printf("Em percentual: 10 %%\n");
}else if(a>=1200.01 && a<=2000.00){
    printf("Novo salario: %.2f\n",a+fourth);
    printf("Reajuste ganho: %.2f\n",fourth);
    printf("Em percentual: 7 %%\n");
}else if(a>2000.00)
{
    printf("Novo salario: %.2f\n",a+fifth);
    printf("Reajuste ganho: %.2f\n",fifth);
    printf("Em percentual: 4 %%\n");
}

return 0;
}