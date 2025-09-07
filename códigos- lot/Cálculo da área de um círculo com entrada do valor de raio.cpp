/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define pi 3.14159
int main()
{
    float raio, area;
    printf("digite o raio: ");
    scanf ("%f", &raio);
    area= pi * raio * raio;
    printf("area = %f", area);

    return 0;
}