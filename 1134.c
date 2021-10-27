#include <stdio.h>

int main(){

    int sum = 0, num1, num2, big , small;
    scanf("%d %d", &num1, &num2);

    big = num1;
    small = num2;

    if(num2 > num1) {
        big = num2;
        small = num1;       
    }

    for(int i = small; i <= big; i++) {
        sum += i;
        i == big ? printf("%d",i): printf("%d ",i);
    }

    printf("sum = %d", sum);
    

//     if(dd) {
//          printf("MUITO OBRIGADO\n");
//     }



// printf("Alcool: %d\n",aa);
// printf("Gasolina: %d\n",bb);
// printf("Diesel: %d\n",cc);4



return 0;
}
