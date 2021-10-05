#include <stdio.h>
int main(){
    int i,a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    while(a<c){  
    b+=b;
    d+=d; 
    }
     if(b==d){
          printf("Yes\n");
    }else{
        printf("No\n");
    }
 
   
    return 0;
}

// #include <math.h>
// #include <stdio.h>
// int main()
// {
//     int x1,v1,x2,v2,temp; 
//     scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
//     while(x1<x2)
//     {
//         x1+=v1;
//         x2+=v2;
//     }
//     if(x1==x2)
//         printf("YES\n");
//     else
//         printf("NO\n");
//     return 0;
// }




