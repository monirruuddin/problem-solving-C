#include <stdio.h>
int main(){
    int pass = 2002 ,input;

    while (scanf("%d",&input)) {
        // scanf("%d", &input);
        if (pass == input) {
            printf("Acesso Permitido\n");
            break;
            
        } else {
            printf("Senha Invalida\n");
        }
    }  

    return 0;
}