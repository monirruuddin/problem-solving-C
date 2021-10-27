// #include <stdio.h>
// int main()
// {
//     int I,J;
//     for(I=1,J=60;J>=0;I=I+3,J=J-5){
//         printf("I=%d J=%d\n",I,J);
//     }

//     return 0;
// }




#include<stdio.h>
int main()
{
 int I=1,J;
 for(J=60;J>=0;J-=5)
 {
  printf("I=%d J=%d\n",I,J);
  I+=3;
 }

 
 return 0;
}




