#include <stdio.h>

 int main(){
     
     int marks1,marks2,marks3;
     printf("enter marks1;\n");
     scanf("%d",&marks1);
     
     printf("enter marks2;\n");
     scanf("%d",&marks2);
     
     printf("enter marks3;\n");
     scanf("%d",&marks3);
     
     printf("the marks are %d, %d , and %d",marks1,marks2,marks3);
     
     if(marks1<33||marks2<33||marks3<33){
         printf("\nyou are failed due to less marks in particular subject\n");
     }
     else if((marks1 + marks2  +marks3)/3 < 44){
         printf("\nfailed due to less percentage");
         
     }
     else{
         printf("pass");
     }
     
     
     
     
     
     
// int age = 23;
// // int girl_age= 2;

// if(age>60){
//     printf("you can drive and u r boomer \n");
// }
//  else if(age>=40){
//     printf(" you can drive \n");
// }
//  else if(age<18){
//      printf("you can't drive");
//  }
//      else{
//          printf("error");
//      }
//     //  printf("\nman is yonger");
 
   
//   int a =0;
//   int b =0;
//   printf("the value of a and b is %d\n",a&&b );//and obrator
//   printf("the value of a or b is %d\n",a||b);//or oprator
//   printf("the value of not of  a  is %d,%d",!a,!b);// not oprator 
   
    return 0;
}