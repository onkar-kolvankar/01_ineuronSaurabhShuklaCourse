#include<iostream>
using namespace std;

// int func(int z){
//     if(z == 6)
//         return 5;
//     else    
//         return 6;
// }
// int main (){

// int x,y;

// y=5;

// x=func(y++);

// printf("%s", (x==5)?"true": "false");
// }

// int main(){
//     int i = 5 ;
//     i = i++ + ++i;
//     printf("%d",i);
//     return 0;
// }

// int main(){
//     float f = 2.0;
//     switch(f){
//         case 1.0:
//             printf("one");
//             break;
//         case 2.0:
//             printf("two");
//             break;
//         default:
//             printf("%f",f);
//         return 0;
//     }
// }

int main(){
    int i = 5 , j = 2;
    printf("%d %d",i << j , i>>j);
}