// #include <stdio.h>
// int main() {

// float a,b,c,d,s;
// float result,final;
// scanf("%f %f %f %f",&a,&b,&c,&d);
// result = ((a*2 + b*3 + c*4 +d*1)/(2+3+4+1));
// printf("Media: %.1f\n",result);

// if(result>=7.0){
//     printf("Aluno aprovado.\n");

// }else if (result<5.0){
//     printf("Aluno reprovado.\n");
// }else if (result >=5.0 && result<=6.9){
//     printf("Aluno em exame.\n");
//     scanf("%f",&s);
//     printf("Nota do exame: %.1f\n",s);
//     final=(s+result)/2;
//     if (final>=5.0){
//         printf("Aluno aprovado.\n");
//     }else if(final<=4.9){
//         printf("Aluno reprovado.\n");
//     }
//     printf("Media final: %.1f\n",final);
    
    
    
    
// }




// return 0;
// }












#include <stdio.h>
int main()
{
    double a, b, c, d, last, m;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &last);
        printf("Nota do exame: %.1f\n", last);
        if (last + m / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (last + m ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}




// (2.0*2 + 4.0*3 + 7.5*4 +8.0*1)/(2.0+4.0+7.5+8.0)
// 2 3 4 1