// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    char grade;
    int marks =98;
    if(marks>=90 && marks<=100){
        grade ='A';
    }
    if(marks>=80 && marks<=90){
        grade ='b';
    }
    if(marks>=70 && marks<=80){
        grade ='c';
    }
    if(marks>=60 && marks<=70){
        grade ='d';
    }
    if(marks>=40 && marks<=60){
        grade ='E';
    }
    
    else{
        grade ='f';
    }
    
    // int a;
    // printf("enter A:");
    
    
    // scanf("%d", &a);
    
    // switch(a){
    //     case 1:
    //     printf("you entered 1");
    //     break;
    //     case 2:
    //     printf("you entered 2");
    //     break;
    //     case 3:
    //     printf("you entered 3");
    //     break;
    //     case 4:
    //     printf("you entered 4");
    //     break;
    //     default:
    //     printf("Error");
    
//  int a=345;
//  int b=33213;
//  a>b?printf("a is greater"):printf("b is greater");
    return 0;
}

// int main(){
// float c=37.0,f;
// f=(9/5)*c+32;

// //     printf("the value of temp is ,%f",f);
//     return 0;
// }
