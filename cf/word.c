#include <stdio.h>
#include <ctype.h>
int main(){

char name[2000];
gets(name);
int i=0;
while (name[i] != '\0'){
    if (name[i] ==tolower(name[i])){
        name[0] = toupper(name[i]);
    }
    printf("%c",name[i]);
    i++;
}
    return 0;
}



