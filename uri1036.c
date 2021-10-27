#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,x,xx;
    scanf("%lf %lf %lf",&a,&b,&c);
    double val =sqrt((b*b)-(4*a*c));

    
    if(a!=0 && val>0){
    x= (-b+val)/(2*a);
    xx= (-b-val)/(2*a);

    printf("R1 = %.5lf\n",x);
    printf("R2 = %.5lf\n",xx);
    }else{
        printf("Impossivel calcular\n");
    }

return 0;
}





// #include <stdio.h>
// #include <math.h>

// int main() {
//     double a,b,c,x,xx;
//     scanf("%lf %lf %lf",&a,&b,&c);
    
//     if(a!=0 && b!=0 && c!=0 && a>0 && b>0 && c>0 ){
//     x= (-b+sqrt((b*b)-(4*a*c)))/(2*a);
//     xx= (-b-sqrt((b*b)-(4*a*c)))/(2*a);

//     printf("R1 = %.5lf\n",x);
//     printf("R2 = %.5lf\n",xx);
    
//     }else{
//         printf("Impossivel calcular\n");
//     }

// return 0;
// }