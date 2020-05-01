// Your C code here
// Your C code here

#include <stdio.h>

int main() {
   /* my first program in C */
   printf("Hello, World! \n");
   int i=0;
   int flag=0;
   for(i=0;i<2;i++){
      printf("this is a new action\n");
      if(i==1){
         flag =1 ;
      }
   }
   if(flag==1){
      printf("finished correctly");
   }

   return 0;
}
