/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario, conta1,conta2,conta3;
    printf("digite seu salário: ");
    scanf("%f", &salario);
    
    if (salario <=600){
        printf("você é isento ao inss ");
    }
    if(salario>600 && salario<=1200){
        conta1=salario*0.20;
        printf("o desconto do inss é de %.2f\n:", conta1);
    } 
    if(salario >1200 && salario<=2000){
        conta2=salario*0.25;
        printf("o desconto do inss é de %.2f\n:", conta2);
    }
    if (salario > 2000){
        conta3=salario*0.30;
        printf("o desconto do inss é de %.2f\n :", conta3);
    }
    

    return 0;
}
