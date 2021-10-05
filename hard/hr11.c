#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
    int m,n,t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(a[i]+a[j] == m)
                   printf("%d\t%d\n",i+1,j+1);
    }
    return 0;
}







// #include <stdio.h>

// int main() {

// int i,j,x,n,dollar,sizeofarr;
// scanf("%d",&n);
// for (i =1; i<=n; i++){
//     printf("Dollars:");
//     scanf("%d",&dollar);
//     printf("size Of array:");
//     scanf("%d",&sizeofarr);
//     int arr[sizeofarr];

//     for ( j = 0; j < sizeofarr; j++){
//         scanf("%d",&arr[i]);
//     }
//     for ( i = 0; i < sizeofarr; i++){
//         for ( j =i+1 ; j < sizeofarr; j++){

//          if (arr[i]+arr[j]==dollar){
//              printf("%d %d",i+1,j+1);
//          }
         

//         }
//     }
    


//     for ( j = 1; j <= sizeofarr; j++){
//         scanf("%d",&x);
//         arr[j]= x;
//         int sum=0;
//         if (sum+arr[j]==dollar){
//             printf("%d\n",j);

//         }
        
//     }
       
// }
    
//     return 0;
// }