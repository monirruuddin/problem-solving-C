#include <stdio.h>

int main()
{
    int x,y,small,big,i;
    scanf("%d %d",&x,&y);
    if(x>y)
    {      
        big =x;
        small=y;
    }else{
        big=y;
        small=x;
    }

    for ( i = small+1; i <big; i++){
        if(i%5==2 || i%5==3){
        printf("%d\n",i);
        }
    }

    return 0;
}



// #include <stdio.h>
// int main() {
// int i,num1,num2;
// scanf("%d %d",&num1,&num2);
//  if(num1>num2)
// {
//     num1=num2;
//     num2=num1;
// }


// for (i = num1; i <num2; i++){
//     if (i%5==2 || i%5==3){
//         printf("%d\n",i);
//     }  
// }

//     return 0;
// }