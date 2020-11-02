#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
extern void CMAIN(float a, float b, float c);


void validarCantidadCaracteres(int length){
    if(length>8){
        printf("\nSolo se tomaran en cuenta los primeros 8 digitos\n");
    }
}

int validarCaracteres(char caracteres[], int length){
    int cantPuntos = 0;

    if(length-1 ==0){
      printf("\nNo se puede cargar valor vacio\n");
        return 0;  
    }

    for(int i=0; i<length-1; i++){
        
            if(!isdigit(caracteres[i])){
                if(caracteres[i]!='.'){
                    printf("\nEl valor ingresado es inadmisible. Solo se permiten numeros y punto decimal\n");
                    return 0;
                }else{
                    cantPuntos++;

                    if(cantPuntos == 1 && length-1 == 1){
                         printf("\nLos valores no pueden ser solo puntos\n");
                         return 0;
                    }
                    if(cantPuntos > 1){
                        printf("\nSolo se permite un punto decimal\n");
                        return 0;  
                    }
                }
            }
        
        }
    return 1;
}

int main()
{
   float a,b,c;
   char characterA[100]; 
   char characterB[100]; 
   char characterC[100]; 
   int length =0;

    printf("\n Este programa calcula las raíces de una función cuadrática a través de la fórmula resolvente.");
    printf("\n A continuacion se le indica que ingrese los coeficientes a, b y c para obtener el reslultado. \n\n");

  
    do{               
        printf(" Ingrese el valor de A:");
        fgets(characterA, sizeof(characterA), stdin);  // read string
        length = strlen(characterA);
        validarCantidadCaracteres(length);
    }while (!validarCaracteres(characterA, length));

    do{ 
        printf(" Ingrese el valor de B:");
        length = strlen(characterB);
        validarCantidadCaracteres(length);
        fgets(characterB, sizeof(characterB), stdin);  // read string
    }while (!validarCaracteres(characterB, length));

    do{ 
        printf(" Ingrese el valor de C:");
        length = strlen(characterC);
        validarCantidadCaracteres(length);
        fgets(characterC, sizeof(characterC), stdin);  // read string
     }while (!validarCaracteres(characterC, length));

    a = strtod(characterA,NULL);
    b = strtod(characterB,NULL);
    c = strtod(characterC,NULL);

    printf("Conversion a float: %f\n", a);
    printf("Conversion a float: %f\n", b);
    printf("Conversion a float: %f\n", c);
    

   CMAIN( a,  b,  c);

    return 0;
}
