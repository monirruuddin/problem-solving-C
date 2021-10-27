#include <stdio.h>
int main()
{
    int N, X, a, b, c, d=0;
    scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        scanf("%d", &X);
        c=X/2; d=0;
        for(b=1; b<=c; b++)
        {
            if(X%b==0)
                d+=b;
        }
        if(d==X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
    }
    return 0;
}











// #include <stdio.h>
// int main()
// {
//     int i,x,sum=0,n;
//     scanf("%d",&x);
//     for (i = 1; i <x; i++){
//          scanf("%d",&n);
//     if (n%i==0)
//         {
//             sum +=n;
//         }   
//     if (sum==n)
//     {
//         printf("%d eh perfeito\n",n);
      
//     }else
//     {
//         printf("%d nao eh perfeito\n",n);
//     } 
//     }
    
    
//     return 0;
// }

