## Ejercicio 4. Gestion de memoria

Usted dispone de un dispositivo que utiliza un sistema de paginación con direcciones virtuales de 32 bits , 1 GB de memoria física y frames de 4 KB. ¿Cuántas entradas posee la
tabla de páginas en cada uno de estos esquemas? 


**C.** Si se utiliza un sistema de paginación de un solo nivel.

**D.** Si se utiliza un sistema de tabla de paginación invertido.



**C).** Direccion virtual de 32 bits.

- 4 KB es el tamaño de una pagina.

- 2^12 = 4 KB
 
 
            <20|12>          
   
bits para paginas | bits para el offset

- La cantidad de entradas de paginas para un sistema de paginacion de un solo nivel es de 2^20 = 1.048.576.

**D).** 

Memoria Fisica = 1 GB
2^30 = 1 GB

1 GB de memoria fisica / 4K de frames = frames en memoria

2^30 / 2^12 = 2^18

- La cantidad de entradas de paginas para un sistema de paginacion invertido es de 2^18 = 262.144. Porque la tabla de paginas invertidas tiene 1 entrada por cada frame
de la memoria.
