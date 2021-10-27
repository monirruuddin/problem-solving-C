#include <stdio.h>
int main() {

    char x[20];
    char y[20];
    char z[20];

    scanf("%c %c %c",&x,&y,&z);

    char maina[20]= "vertebrado";
    char mainb[20]= "invertebrado";

    // maina== x && y==a && z==aa ==aaa;
    // maina== x && y==a && z==bb ==bbb;
    // maina== x && y==b && z==bb ==ccc;
    // maina== x && y==b && z==cc ==ddd;

    // mainb== x && y==d && z==dd ==eee;
    // mainb== x && y==d && z==cc ==fff;

    // mainb== x && y==c && z==dd ==ggg;
    // mainb== x && y==c && z==bb ==hhh;

    

    

    char a[10]= "ave";
    char b[10]= "mamifero";
    char c[10]= "anelideo";
    char d[10]= "inseto";

    char aa[10]= "carnivoro";
    char bb[10]= "onivoro";
    char cc[10]= "herbivoro";
    char dd[10]= "hematofago";


    char aaa[10]= "aguia";
    char bbb[10]= "pomba";
    char ccc[10]= "homem";
    char ddd[10]= "vaca";
    char eee[10]= "pluga";
    char fff[10]= "lagarta";
    char ggg[20]= "sanguessuga";
    char hhh[10]= "minhoca";



    if("vertebrado" == x && y == "ave" && z == "carnivoro"){
        printf("%s\n",aaa);
   }else if ("vertebrado" == x && y=="ave" && z=="onivoro"){
        printf("%s\n",bbb);
   }else
   {
       printf("%s\n",hhh);
   }
   

// vertebrado ave carnivoro



    
    

    
    
    
    

        


//    int dailNumber;
//    scanf("%d",&dailNumber);

//    if(dailNumber==61){
//    printf("Brasilia\n");
//    }else if (dailNumber==71){
      
//    printf("Salvador\n");

//    }else if (dailNumber==11){
  
//    printf("Sao Paulo\n");
//    }else if (dailNumber==21){
 
//    printf("Rio de Janeiro\n");
//    }else if (dailNumber==32){
  
//    printf("Juiz de Fora\n");
//    }else if (dailNumber==19){
  
//    printf("Campinas\n");
//    }else if (dailNumber==27){
  
//    printf("Vitoria\n");
//    }else if (dailNumber==31){
  
//    printf("Belo Horizonte\n");
//    }else
//    {
//       printf("DDD nao cadastrado\n");
//    }
   
    

return 0;
}