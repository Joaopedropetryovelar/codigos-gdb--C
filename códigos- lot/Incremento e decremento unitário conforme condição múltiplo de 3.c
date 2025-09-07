/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int numero;
   printf("digite algum número:  ");
   scanf("%d", &numero);
   
   if(numero %3  == 0){
       numero+=1;
       printf("seu numero é divisivel por três, e seu novo número é %d", numero);
       
   }
   else{
       numero-=1;
        printf("seu numero não é divisivel por três, e seu novo número é %d", numero);
       
   }

    return 0;
}
