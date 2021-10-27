#include <stdio.h>
int main() {

  int i,num,count=12;
  scanf("%d",&num);
  count += num;
  
  for (i = num; i <count ; i++)
  {
      if (i%2==1 || i%2==-1)
      {
          printf("%d\n",i);
      }
      
  }
  

return 0;
}



















// #include <stdio.h>
// int main()
// {
//     int X,a,b;
//     scanf("%d", &X);
//     if(X%2==0)
//     {
//         for(a=X+1;a<=X+11;a=a+2)
//             printf("%d\n",a);
//     }
//     else
//     {
//         for(b=X;b<=X+10;b=b+2)
//             printf("%d\n",b);
//     }
//     return 0;
// }









