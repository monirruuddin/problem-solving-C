#include <stdio.h>

int main() {
 
 float inputNumber;
  scanf("%f",&inputNumber);
        
   if( inputNumber>=0 && inputNumber<=25){
      printf("Intervalo [0,25]\n");
  }
  else if( inputNumber>25 && inputNumber<=50 ){
      printf("Intervalo (25,50]\n");
  }
  else if(inputNumber>50 && inputNumber<=75){
      printf("Intervalo (50,75]\n");
  }
 else if(inputNumber>75 && inputNumber<=100){
      printf("Intervalo (75,100]\n");
  }
 else if(inputNumber>0 || inputNumber<100)
  {
      printf("Fora de intervalo\n");
  }
 
   
return 0;
}
