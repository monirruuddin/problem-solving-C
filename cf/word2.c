#include <stdio.h>
#include <ctype.h>
int main(){

char name[2000];
int countu=0,countl=0;
gets(name);
int i=0;
while (name[i] != '\0'){

    if (name[i] ==tolower(name[i])){
       countl++;
    }
    if (name[i] ==toupper(name[i])){
       countu++;
    }
    i++;
}

    int j=0;
    while(name[j] != '\0') {
        if (countl>=countu){
            printf("%c",tolower(name[j]));
        }else{   
            printf("%c",toupper(name[j]));
        }
        j++;
    }
 
    return 0;
}



