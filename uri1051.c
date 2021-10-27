// #include <stdio.h>
// int main() {


// float first,a,second,third;
// scanf("%f",&a);
// first= ((a/100)*8);
// second = ((a/100)*18);
// third = ((a/100)*28);

// if (a>=0 && a<=2000.00){
//     printf("Isento\n");
// }else if(a>=2000.01 && a<=3000.00){
//     printf("R$ %.2f\n",first);
// }else if(a>=3000.01 && a<=4500.00){
//     printf("R$ %.2f\n",second);
// }else if(a>4500.00)
// {
//     printf("R$ %.2f\n",third);
// }

// return 0;
// }





#include <stdio.h>
int main()
{
 float n, r, f1, f2, f3;
 scanf("%f", &n);

 if(n <= 2000){
  printf("Isento\n");
 }else{
  if(n > 2000 && n <= 3000){
   f1 = n - 2000;
   f1 = ((f1 * 8) / 100);
   r = f1;
  }else if(n > 3000 && n <= 4500){
   f1 = n - 2000;
   f2 = f1 - 1000;
   f1 -= f2;
   f1 = ((f1 * 8) / 100);
   f2 = ((f2 * 18) / 100);
   r = f2 + f1;
  }else{
   f1 = n - 2000;
   f2 = f1 - 1000;
   f3 = f2 - 1500;
   f1 -= f2;
   f2 -= f3;
   f1 = ((f1 * 8) / 100);
   f2 = ((f2 * 18) / 100);
   f3 = ((f3 * 28) / 100);
   r = f3 + f2 + f1;
  }

  printf("R$ %.2f\n", r);
 }

 return 0;
}