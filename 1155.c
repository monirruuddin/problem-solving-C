#include <stdio.h>
int main()
{
    double a,b=1,c, S=0;
    for(a=1; a<=100; a++)
    {
        c=1/a;
        S+=c;
    }
    printf("%.2lf\n",S);
    return 0;
}






// #include <stdio.h>
// int main() {
    
//     int i,sum=1;
//     for (i = 1; i <=100; i++){
//         sum +=i;
//         printf("%.2f=%d+1\n",(float)sum,i); 
//     }
    

// return 0;
// }