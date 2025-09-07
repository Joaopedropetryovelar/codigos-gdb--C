/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define  pi  3.14
int main()
{
    float metros, centimetro, milimetros, decimetros;
    printf("digite o valor em metros: ");
    scanf("%f", &metros);
    centimetro = metros * 100;
    milimetros =  metros *1000;
    decimetros = metros * 10;
    printf(" o valor em centimetros é:%.2f\n", centimetro);
    printf("o valor em milimetros é: %.2f\n", milimetros);
    printf("o valor em decimetros é:%.2f\n", decimetros);
    
    
    
    
    return 0;
}