#include <stdio.h>

int main()
{
    int x,y,small,big;
    scanf("%d %d",&x,&y);
    if(x>y)
    {      
        big =x;
        small=y;
    }else if(x<y){
        big=y;
        small=x;
    }else if(x==y)
    {
        big=x;
        small=y;
    }

    int i,sum=0;
    for ( i = big-1; i > small; i--){
        if(i%2==1 || i%2==-1){
            sum = sum + i;
        }
       

    }
    printf("%d\n",sum);

    return 0;
}

















// int main() {

// int i,x,y;
// scanf("%d %d",&x,&y);
// if(x!= y){
//     for (i =x;i>=y ;i--){
//     if (i%2==1){
//        printf("Here the Number: %d\n",i);
//        break;
//     }  
// }
// }else{
//     i=0;
//     printf("%d",i);
// }



// return 0;
// }