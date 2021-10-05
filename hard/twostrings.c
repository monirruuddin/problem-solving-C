#include <stdio.h>
#include <ctype.h>
int main(){

int x,i,j;
int count=0;
char sl1[10];
char sl2[10];

scanf("%s",&sl1);
scanf("%s",&sl2);

for (i = 0,j=0; sl1[i] != '\n' && sl2[j] != '\n'; i++,j++){
  if (sl1[i] == sl2[j]){
      count++; 
      break;
  }
    // printf("%s  %s",sl1,sl2);
}
// printf("%d\n",sl1[i]-sl2[i])
printf("%d",count);

    return 0;
}







// int main() {
//     int n;
//     cin >> n;
//     for (int t=0;t<n;t++){
//         string s1, s2;
//         cin >> s1;
//         cin >> s2;
//         string letters = "abcdefghijlkmnopqrstuvwxyz";
//         string output = "NO";
//         for (int i=0;i<letters.size();i++){
//             if (s1.find(letters[i])!=string::npos && s2.find(letters[i])!=string::npos){
//                 output = "YES";
//                 break;
//             }
//         }
//         cout << output << endl;
//     }
//     return 0;
// }






