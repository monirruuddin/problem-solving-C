#include <stdio.h>
int main(){
    float a[12][12];
    float sum=0,n;
    int i,j,col;
    char ch;
    scanf("%d %c",&col,&ch);

    for (i = 0; i < 12; i++){
        for ( j = 0; j < 12; j++){
            scanf("%f",&n);
             a[i][j]=n;
        }
    }
    for ( i = 0; i < 12; i++){
        sum = (float)sum+ a[i][col];
    }
    float avg=(float) sum/12.0;
    if (ch == 'S'){
        printf("%.1f\n",sum);
    }else{
        printf("%.1f\n",avg);
    }

    return 0;
}


// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12