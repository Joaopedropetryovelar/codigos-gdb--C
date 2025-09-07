/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo,salario,aumento1,aumento2,aumento3,aumento4,salario_novo,salario_novo2,salario_novo3,salario_novo4;
    printf("digite seu código:");
    scanf("%d", &codigo);
    
    printf("digite seu salário:");
    scanf("%d", &salario);
    
    switch(codigo){
        case  1 :
        aumento1=salario*0.07;
        salario_novo=salario+aumento1;
        printf("seu novo salário é de:%d", salario_novo);
        break;
        
        case 2 :
        aumento2=salario*0.09;
        salario_novo2=salario+aumento2;
        printf("seu novo salário é de:%d", salario_novo2);
        break;
        
        case  3 :
        aumento3=salario*0.05;
        salario_novo3=salario+aumento3;
        printf("seu novo salário é de:%d",salario_novo3);
        break;
        
        case 4 :
        aumento4=salario*0.07;
        salario_novo4=salario+aumento4;
        printf("seu novo salário é de:%d" ,salario_novo4);
        break;
        
        
    }
        
  
    return 0;
}
