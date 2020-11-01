#include <stdio.h>
#include<string.h>
#include <stdlib.h>
extern void CMAIN(float a, float b, float c);

int main()
{
   float a,b,c;
   char characterA[8]; 
   char characterB[8]; 
   char characterC[8]; 
  
    printf(" Ingrese el valor de A:");
    fgets(characterA, sizeof(characterA), stdin);  // read string

     printf(" Ingrese el valor de B:");
    fgets(characterB, sizeof(characterB), stdin);  // read string

     printf(" Ingrese el valor de C:");
    fgets(characterC, sizeof(characterC), stdin);  // read string

    a = strtod(characterA,NULL);
    b = strtod(characterB,NULL);
    c = strtod(characterC,NULL);
    printf("Converting: %f\n", a);
    printf("Converting: %f\n", b);
    printf("Converting: %f\n", c);
    

   CMAIN( a,  b,  c);

    return 0;
}