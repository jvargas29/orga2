## Ejercicio7. Gestion de memoria


Dado el siguiente esquema, indicar el estado final de la cache TLB y tabla de páginas.

También indicar la cantidad de rafagas utilizadas en cada secuencia.

Las páginas requeridas son las siguientes:

**A.** Pagina 1, Pagina 2, Pagina 6, Pagina 3, Pagina 2, Pagina 1, Pagina 4, Pagina 5

**B.** Pagina 6, Pagina 1, Pagina 3, Pagina 2, Pagina 4, Pagina 5, Pagina 4, Pagina 6


**A).**

**TLB**

| Pagina | Frame | Tiempo |
| ------------- | ------------- | ------------- |
| Pagina 4  | Frame 3  | 7 |
| Pagina 5 | Frame 4  | 8  |


**Tabla de paginas**

| Pagina | Frame | Valid | Tiempo |
| ------------- | ------------- | ------------- |------------- |
| Pagina 1  | Frame 1  | V | 6 |
| Pagina 2 | Frame 2  | V  | 5 |
| Pagina 3  |  | I |  |
| Pagina 4 | Frame 3  | V  | 7 |
| Pagina 5  | Frame 4  | V | 8 |
| Pagina 6 |  | I  |  |


**Cantidad de rafagas por secuencia**

| Pagina | Tiempo de acceso | Total |
| ------------- | ------------- | ------------- | 
| Pagina 1  | 1  | 1 |
| Pagina 2 | 1  | 2 |
| Pagina 6  | 1 + 2 | 5 |
| Pagina 3 | 1 + 2 + 10 | 18  |
| Pagina 2  | 1 + 2 + 10  | 31 |
| Pagina 1 | 1 + 2 + 10 | 44  |
| Pagina 4 | 1 + 2 + 10 | 57 |
| Pagina 5 | 1 + 2 + 10 | 70 |

**B).**

**TLB**

| Pagina | Frame | Tiempo |
| ------------- | ------------- | ------------- |
| Pagina 5  | Frame 3  | 8 |
| Pagina 6 | Frame 4  | 9  |


**Tabla de paginas**

| Pagina | Frame | Valid | Tiempo |
| ------------- | ------------- | ------------- |------------- |
| Pagina 1 |  | I |  |
| Pagina 2 | Frame 2  | V  | 6 |
| Pagina 3 |  | I |  |
| Pagina 4 | Frame 1  | V  | 7 |
| Pagina 5 | Frame 3  | V | 8 |
| Pagina 6 | Frame 4 | V  | 9 |


**Cantidad de rafagas por secuencia**

| Pagina | Tiempo de acceso | Total |
| ------------- | ------------- | ------------- | 
| Pagina 6 | 1 + 2 | 3 |
| Pagina 1 |  1 + 2 | 6 |
| Pagina 3 |  1 + 2 + 10 | 19 |
| Pagina 2 | 1 + 2 + 10 | 32 |
| Pagina 4 | 1 + 2 + 10  | 45 |
| Pagina 5 | 1 + 2 + 10 | 58 |
| Pagina 4 | 1 | 59 |
| Pagina 6 | 1 + 2 + 10 | 72 |
