#include <stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j,n;

    printf("A:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d",&n);
            a[i][j]=n;
        }       
    }
    printf("\n");

    printf("B:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d",&n);
            b[i][j]=n;
        }       
    }

    printf("\n");
    printf("C Processing Part:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            c[i][j] = a[i][j]+b[i][j];
        }       
    }

        
    printf("\n");
    printf("Final Result Part:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");    
    }
    
    
    return 0;
}