#include <stdio.h>
#include<string.h>
#include <stdlib.h>
extern void CMAIN(float a, float b, float c);

int main()
{
   int intA,intB,intC;
   float a,b,c;
   char characterA[100]; 
   char characterB[100]; 
   char characterC[100]; 

   // float values[3]= {0.0,0.0,0.0};
   // int enteros[3]= {0,0,0};
    //char valores[3] = {'A','B','C'};

  
    printf(" Ingrese el valor de A:");
    fgets(characterA, sizeof(characterA), stdin);  // read string

     printf(" Ingrese el valor de B:");
    fgets(characterB, sizeof(characterB), stdin);  // read string

     printf(" Ingrese el valor de C:");
    fgets(characterC, sizeof(characterC), stdin);  // read string
  
    int cantCaracteresA = strlen(characterA)-1;
    int cantCaracteresB = strlen(characterB)-1;
    int cantCaracteresC = strlen(characterC)-1;

    //int x = atoi(characterA);
    a = strtod(characterA,NULL);
    b = strtod(characterB,NULL);
    c = strtod(characterC,NULL);
    printf("Converting: %f\n", a);
    printf("Converting: %f\n", b);
    printf("Converting: %f\n", c);



    printf(" valor ingresado: %d", cantCaracteresA);
    printf(" valor ingresado: %d", cantCaracteresB);
    printf(" valor ingresado: %d", cantCaracteresC);
    

   CMAIN( a,  b,  c);

    return 0;
}